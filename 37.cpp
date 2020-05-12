#include <iostream>
using namespace std;
class Base
{
private:
	int x;
public:
	Base(int i)
	{
		x=i;
		cout<<"consturcting Base\n";
	}
	void show()
	{
		cout<<" x= "<<x<<endl;
	}
};
class Derived:public Base
{
private:
	Base d;
public:
	Derived(int i):Base(i),d(i)
	{
		cout<<"constructing Derived\n";
	}
};
int main()
{
	Derived obj(100);
	obj.show();
	return 0;
}