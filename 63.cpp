#include <iostream>
using namespace std;
int add(int a,int b);
int main()
{
	int x,y,sum;
	cout<<"Please input x and y:"<<"\n";
	cin>>x>>y;
	sum=add(x,y);
	cout<<x<<"+"<<y<<"="<<add(x,y)<<endl;
	return 0;
}
int add(int a,int b)
{
	return a+b;
}