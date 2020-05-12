#include <iostream>
using namespace std;
class Base               //基类
{
public:
	int i;
	Base(int x):i(x)
	{
		cout<<"tianshipeng"<<endl;
	}
	~Base()
	{
		cout<<"base xigou"<<endl;
	}
	void show()
	{
		cout<<"i in Base is:"<<i<<endl;
	}
};
class Derived :public Base            //派生类
{
public:
	Derived(int x):Base(x)
	{
		cout<<"yangling"<<endl;
	}
	void show()
	{
		cout<<"i in Derived is:"<<i<<endl;
	}
	~Derived()
	{
		cout<<"Derived xigou"<<endl;
	}
};
int main()
{
	Base b1(10);
	cout<<"基类对象 b1.show():\n";
	b1.show();
	Derived d1(20);
	b1=d1;
	cout<<"基类b1=d1,b1.show():\n";
	b1.show();
	cout<<"派生类对象 d1.show():\n";
	d1.show();
	Base &b2=b1;
	cout<<"引用b2=d1,b2.show():\n";
	b2.show();
	Base *b3=&d1;
	cout<<"基类指针b3=&d1,b3->show():\n";
	b3->show();
	Derived *d4=new Derived(d1);
	Base *b4=d4;
	cout<<"基类指针b4=d4,b4->show():\n";
	b4->show();
	cout<<"派生类指针d4,d4->show():\n";
	d4->show();
	delete d4;
	return 0;
}