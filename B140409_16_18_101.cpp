#include <iostream>
using namespace std;
const double PI=3.1415;
class Container
{
public:
	virtual double volume() const=0;
	virtual void Print() const=0;
};
class Cube:public Container
{
private:
	int base;
	int height;
	int width;
public:
	Cube(int b,int h,int w):base(b),height(h),width(w)
	{
	}
	double volume() const;
	void Print() const;
};
double Cube::volume() const
{
	return base*width*height;
} 
void Cube::Print() const
{
	cout<<"The cube : base="<<base<<" ,height="<<height<<" ,width="<<width<<endl;
	cout<<"Its volume is "<<volume()<<endl;
}
class Cylinder:public Container
{
private:
	int height;
	int radius;
public:
	Cylinder(int h,int r):height(h),radius(r)
	{
	}
	double volume() const;
	void Print() const;

};
double Cylinder::volume() const
{
	return (2*PI*radius*height+2*PI*radius*radius);
}
void Cylinder::Print() const
{
	cout<<"The Cylinder : height="<<height<<" ,radius="<<radius<<endl;
	cout<<"Its volume is "<<volume()<<endl;
}
class Sphere:public Container
{
private:
	int radius;
public:
	Sphere(int r):radius(r)
	{
	}
	double volume() const;
	void Print() const;

};
double Sphere::volume() const
{
	return PI*radius*radius*4/3;
}
void Sphere::Print() const
{
	cout<<"The Sphere : radius="<<radius<<endl;
	cout<<"Its volume is "<<volume()<<endl;
}
void TopPrint(Container &p)
{
	p.Print();
}
/*
int main() 
{ 
	Container *ptr[6];     	//����������ָ������
    ptr[0]=new Cube(1,1,1);		//����Cube��Ķ���
    ptr[1]=new Cylinder(1,1);	   //����Cylinder��Ķ���
    ptr[2]=new Sphere(1);      //����Sphere��Ķ���
    ptr[0]->Print();     	//����Cube���Print()����
    ptr[1]->Print();   		//����Cylinder���Print()����
    ptr[2]->Print();     	//����Sphere���Print()����
    ptr[4]= new Cube(2.5,10,1);		//����Cube��Ķ���
    ptr[5]= new Cylinder(15,22);	   //����Cylinder��Ķ���
    ptr[6]= new Sphere(3);      	//����Sphere��Ķ���
    ptr[4]->Print();     	//����Cube���Print()����
    ptr[5]->Print();   		//����Cylinder���Print()����
    ptr[6]->Print();     	//����Sphere���Print()����
	return 0;
}*/
int main()
{
	Cube C1(1,1,1),C2(2.5,10,1);
	Cylinder Cy1(1,1),Cy2(15,22);
	Sphere S1(1),S2(3);
	TopPrint(C1);
	TopPrint(C2);
	TopPrint(Cy1);
	TopPrint(Cy2);
	TopPrint(S1);
	TopPrint(S2);
	return 0;
}
