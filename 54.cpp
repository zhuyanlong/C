#include <iostream>
using namespace std;
class Container
{
protected:
	double radius;
public:
	Container(double r);
	{
		
	}
	virtual double area()=0;
	virtual double volume()=0;
	virtual void print()=0;
};
class Cube:public Container
{
private:
	int longth;
public:
	Cube(int x)
	{
		longth=x;
	}
	double area();
	{
		return 6*x;
	}
	double volume();
	{
		return x*x*x;
	}
	void print();
	{
		
	}
};
class Sphere:public Container
{
public:
	double area();
	{
		return 2*3.14*radius;
	}
	double volume();
	{
		return 3.14*radius*radius;
	}
	void print();
};
class Cylinder:public Container
{
public:
	double area();
	double volume();
	void print();
private:
	int height;
};
int main()
{
	Container *p;
	Cube z;
	Sphere q;
	Cylinder y;
	p=&z;
	cout<<p->area()<<endl;
	cout<<p->volume()<<endl;
	p->print();
	p=&q;
	cout<<p->area()<<endl;
	cout<<p->volume()<<endl;
	p->print();
	p=&y;
	cout<<p->area()<<endl;
	cout<<p->volume()<<endl;
	p->print();
	return 0;
}