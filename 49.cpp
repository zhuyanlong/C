#include <iostream.h>
class Complex
{
private:
	float real;
	float imag;
public:
	Complex(float r=0,float i=0);
	void print();
	friend Complex operator+(const Complex &a,const Complex &b);
	friend Complex operator++(Complex &a);
};
Complex::Complex(float r,float i)
{
	real=r;
	imag=i;
}
void Complex::print()
{
	cout<<real;
	if(imag!=0)
	{
		if(imag>0)
			cout<<"+";
		cout<<imag<<"i";
	}
	cout<<endl;
}
Complex operator +(const Complex &a,const Complex &b)
{
	Complex temp;
	temp.real=a.real+b.real;
	temp.imag=a.imag+b.imag;
	return temp;
}
Complex operator++(Complex &a)
{
	++a.real;
	++a.imag;
	return a;
}
int main()
{
	Complex c1(1.5),c2(5,10),c3;
	cout<<"original c1 is: ";
	c1.print();
	cout<<"original c2 is: ";
	c2.print();
	c3=c1+c2;
	cout<<"c3=c1+c2 is: ";
	c3.print();
	++c2;
	cout<<"after added 1 c2 is: ";
	c2.print();
	return 0;
}