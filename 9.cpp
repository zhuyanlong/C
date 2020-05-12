//函数重载
#include <iostream>
using namespace std;
int square(int x)
{
	return x*x;
}
float square(float x)
{
	return x*x;
}
double square(double x=1.5)
{
	return x*x;
}
int main()
{
	cout<<"square()="<<square()<<endl; //默认情况下调取double
	cout<<"square(10)="<<square(10)<<endl;//整数情况下调取int
	cout<<"square(2.5f)="<<square(2.5f)<<endl;//后缀f调用float
	cout<<"square(1.1)="<<square(1.1)<<endl;//浮点型无后缀调用double
	return 0;
}