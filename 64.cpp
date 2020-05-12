#include <iostream>
const double PI=3.14159;
double area(double r);
double circumference(double r);
using namespace std;
int main()
{
	double radius;
	cout<<"Please input radius:"<<endl;
	cin>>radius;
	cout<<circumference(radius)<<endl;
	cout<<area(radius)<<endl;
	return 0;
}
double area(double r)
{
	return PI*r*r;
}
double circumference(double r)
{
	return 2*PI*r;
}