#include <iostream>
using namespace std;
class Base
{
public:
	Base(int x)
	{
		a=x;
	}
	void Print()
	{
		cout<<"Base::a="<<a<<endl;
	}
	int a;
};
class Derived:public Base
{
public:
	int a;
	Derived(int x,int y):Base(x)
	{
		a=y;
		Base::a*=2;
	}
	void Print()
	{
		Base::Print();
		cout<<"Derived::a="<<a<<endl;
	}
};
void f1(Base &obj)
{
	obj.Print();
}
void f2(Derived &obj)
{
	obj.Print();
}
int main()
{
	Derived d(200,300);
	d.Print();
	d.a=400;
	d.Base::a=500;
	d.Base::Print();
	Base *pb;
	pb=&d;
	pb->Print();
	f1(d);
	Derived *pd;
	pd=&d;
	pd->Print();
	f2(d);
	return 0;
}