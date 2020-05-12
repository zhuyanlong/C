#include <iostream>
using namespace std;
class Base
{
	int b;
public:
	Base(int x):b(x)
	{}
	int getb()
	{
		return b;
	}
};
class Derived:public Base
{
	int d;
public:
	Derived(int x,int y):Base(x),d(y)
	{}
	int getd()
	{
		return d;
	}
};
int main()
{
	Base b1(11);
	Derived d1(22,33);
	b1=d1;
	cout<<"b1.getb()="<<b1.getb()<<endl;
	Base *pb1=&d1;
	cout<<"pb1->getb()"<<pb1->getb()<<endl;
	Derived *pd=&d1;
	Base *pb2=pd;
	cout<<"pb2->getb()="<<pb2->getb()<<endl;
	Base &rb=d1;
	cout<<"rb.getb()="<<rb.getb()<<endl;
	return 0;
}