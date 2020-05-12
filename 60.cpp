#include <iostream>
using namespace std;
class Complex
{
private:
	double real;
	double imag;
public:
	Complex(float r=0,float i=0);
	friend Complex operator +(Complex &a,Complex &b);
	friend Complex operator -(Complex &a,Complex &b);
	Complex & operator *(Complex &b);
	Complex & operator /(Complex &b);
	friend Complex operator ++(Complex &a);     //友元函数前置++
	Complex & operator ++();                     //成员函数后置++
	void Print();
};
Complex::Complex(float r,float i)
{
	real=r;
	imag=i;
}
Complex operator +(Complex &a,Complex &b)
{
	Complex temp;
	temp.imag=a.imag+b.imag;
	temp.real=a.real+b.real;
	return temp;
}
Complex operator -(Complex &a,Complex &b)
{
	Complex temp;
	temp.imag=a.imag-b.imag;
	temp.real=a.real-b.real;
	return temp;
}
Complex Complex::operator *(Complex &b)
{
	Complex temp;
	temp.real=real*b.real-imag*b.imag;
	temp.imag=real*b.imag+imag*b.real;
	return temp;
}
Complex Complex::operator /(Complex &b)
{
	real=(real*b.real+imag*b.imag)/(real*real+b.real*b.real);
	imag=(imag*b.real-real*b.imag)/(real*real+b.real*b.real);
	return *this;
}
Complex operator ++(Complex &a)
{
	++a.real;
	++a.imag;
	return a;
}
Complex & Complex::operator ++()
{
	Complex temp();
	real++;
	imag++;
	return temp;
}
void Complex::Print()
{
	cout<<real;
	if(imag!=0)
	{
		if(imag>0)
			cout<<"+";
		else
			cout<<"-";
		cout<<imag<<"i";
	}
	cout<<endl;
}
int main()
{
	Complex A1(2.3,4.6),A2(3.6,2.8);
	Complex A3,A4,A5,A6;
	A3=A1+A2;
	A4=A1-A2;
	A5=A1*A2;
	A6=A1/A2;
	return 0;
}