#include <iostream>
using namespace std;
class Monther
{
private:
	int c;
public:
	Monther(int n):c(n)
	{
		cout<<"constructing Monther,c="<<c<<endl;
	}		
	~Monther()
	{
		cout<<"destrucing Monther"<<endl;
	}
};
class Grand
{
private:
	int a;
public:
	Grand(int n):a(n)		
	{
		cout<<"constructing Grand,a="<<a<<endl;
	}
	~Grand()
	{
		cout<<"destructing Grand"<<endl;
	}
};
class Father :public Grand
{
private:
	int b;
public:
	Father(int n1,int n2):Grand(n2),b(n1)
	{
		cout<<"constructing Father,b="<<b<<endl;
	}
	~Father()
	{
		cout<<"destructing Father"<<endl;
	}
};
class Son:public Father,public Monther//决定了调用顺序
{
private:
	int d;
public:
	Son(int n1,int n2,int n3,int n4):Monther(n2),Father(n3,n4),d(n1)
	{
		cout<<"constructing Son,d="<<d<<endl;
	}
	~Son()
	{
		cout<<"destructing Son"<<endl;
	}
};
int main()
{
	Son s(1,2,3,4);
	return 0;
}