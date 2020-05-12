#include <iostream.h>
class Point
{
	public:
	Point(int a=0,int b=0);
	void Print();
	Point operator +(Point p1);
	friend Point operator -(Point p1,Point p2); 
	private:
	int x;
	int y;
};
Point::Point(int a,int b)
{
	x=a;
	y=b;
}
Point Point::operator +(Point p1)
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
void Point::Print()
{
	cout<<"("<<x<<","<<y<<")"<<endl;
}
int main()
{
	Point p1(1,2),p2(2,3),p3,p4 ;
	p3=p1+p2;
	p4=p1-p2;
	p3.Print();
	p4.Print();
	return 0;
}