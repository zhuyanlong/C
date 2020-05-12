#include <iostream.h>
class Point
{
	public:
	Point(int a=0,int b=0);
	void print();
	Point operator +(Point p1);
	friend Point operator-(Point p1,Point p2);
	private:
	int x;
	int y;
};
Point::Point(int a,int b)
{
	x=a;
	y=b;
}
void Point::print()
{
	cout<<"("<<x<<","<<y<<")"<<endl;
}
Point Point::operator+(Point p1)
{
	Point p;
	p.x=x+p1.x;
	p.y=y+p1.y;
	return p;
}
Point operator-(Point p1,Point p2)
{
	Point p;
	p.x=p1.x-p2.x;
	p.y=p1.y-p2.y;
	return p;
}
int main()
{
	Point p1(5,10),p2(1,3),p3,p4;
	p3=p1+p2;
	p4=p1-p2;
	p3.print();
	p4.print();
	return 0;
}