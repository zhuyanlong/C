#include <iostream>
using namespace std;
class Member
{
public:
	Member()
	{
		cout<<"constructing Member\n";
	}
	~Member()
	{
		cout<<"destructing Member\n";
	}
};
class Base
{
public:
	Base()
	{
		cout<<"constructing Base\n";
	}
	~Base()
	{
		cout<<"destructint Base\n";
	}
};
class Derived:public Base
{
private:
	Member mem;
public:
	Derived()
	{
		cout<<"constructing Derived\n";
	}
	~Derived()
	{
		cout<<"destructint Derived\n";
	}
};
int main()
{
	Derived obj;
	return 0;
}