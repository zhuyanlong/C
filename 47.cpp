#include <iostream.h>
class Point
{
public:
	Point(int a=0,int b=0);
	void print();
	Point operator+(Point p1);
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
	cout<<"{"<<x<<","<<y<<"}"<<endl;
}
Point Point::operator+(Point p1)
{
	Point p;
	p.x=p1.x+x;
	p.y=p1.y+y;
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
	Point p1(5,10),p2(20,30),p3,p4;
	p3=p1+p2;
	p4=p1-p2;
	cout<<"P1=";
	p1.print();
	cout<<"P2=";
	p2.print();
	cout<<"p3=p1+p2 is:";
	p3.print();
	cout<<"p4=p1-p2 is:";
	p4.print();
	return 0;
}