#include <iostream.h>
class Point
{
	double x,y;
public:
	Point(double m=0,double n=0);
	Point operator++();
	friend ostream & operator<<(ostream &out,const Point &obj);
	friend istream & operator>>(istream &in,Point &obj);
};
Point::Point(double m,double n)
{
	x=m;
	y=n;
}
Point Point::operator ++()
{
	x++;
	y++;
	return *this;
}
ostream & operator <<(ostream &out,const Point &obj)
{
	out<<"("<<obj.x<<","<<obj.y<<")"<<endl;
	return out;
}
istream & operator>>(istream &in,Point &obj)
{
	in>>obj.x;
	in>>obj.y;
	return in;
}
void main()
{
	Point b,c(10,20);
	cin>>b;
	cout<<b<<c;
	b=++c;
	cout<<b<<c;
}