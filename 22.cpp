#include <iostream>
#include <cmath>
using namespace std;
class Point
{
	double x,y;
public:
	Point(double a,double b);
	double Getx();
	double Gety();
	friend double Getlength(Point &a,Point &b);
};
Point::Point(double a,double b)
{
	x=a;
	y=b;
}
double Point::Getx()
{
	return x;
}
double Point::Gety()
{
	return y;
}
double Getlength(Point &a,Point &b)
{
	double l;
	l=(a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y);
	return l;
}
void main()
{
	Point a(1,1),b(2,3);
	cout<<Getlength(a,b)<<endl;
}