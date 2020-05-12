#include <iostream>
#include <math.h>
using namespace std;
class Point
{
	double X,Y;
	public:
	Point(double a,double b);
	double GetX();
	double GetY();
	friend double GetLength(Point &A,Point &B);
	void Display();
};
Point::Point(double a,double b)
{
	X=a;
	Y=b;
}
double Point::GetX()
{
	return X;
}
double Point::GetY()
{
	return Y;
}
double GetLength(Point &A,Point &B)
{
	double l;
 	l=pow((pow((A.X-B.X),2)+pow((A.Y-B.Y),2)),0.5);
 	return l;
}
void Point::Display()
{
	cout<<"("<<X<<","<<Y<<")"<<endl;
}
int main()
{
	Point A(10,3);
	Point B(2,3);
//	double l;
	A.Display();
	B.Display();
	cout<<"³¤¶ÈÎª:"<<GetLength(A,B)<<endl;
	return 0;
}