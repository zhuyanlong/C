#include <iostream>
using namespace std;
class Base
{
public:
	Base(int x);
	virtual void Print();
	int a;
};
class Derived :public Base
{
public:
	int a;
	Derived(int x,int y);
	virtual void Print();
};
Base::Base(int x)
{
	a=x;
}
void Base::Print()
{
	cout<<"Base::a="<<a<<endl;
}
Derived::Derived(int x,int y):Base(x)
{
	a=y;
	Base::a*=2;
}
void Derived::Print()
{
	Base::Print();
	cout<<"Derived::a="<<a<<endl;
}
void f(Base &bb)
{
	bb.Print();
}
int main()
{
	Base b(100),*ps;
	Derived d(200,300);
	ps=&b;
	ps->Print();
	ps=&d;
	ps->Print();
	f(b);
	f(d);
	return 0;
}