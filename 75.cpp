#include <iostream>
using namespace std;
class base1
{
public:
	virtual void who()
	{
		cout<<"1"<<endl;
	}
};
class base2
{
public:
	virtual void who()
	{
		cout<<"2"<<endl;
	}
};
class derive:public base1,public base2
{
public:
	void who()
	{
		cout<<"3"<<endl;
	}
};
int main()
{
	base2 *ptr;
	derive obj;
	ptr=&obj;
	ptr->who();
	return 0;
}