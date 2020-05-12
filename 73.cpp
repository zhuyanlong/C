#include <iostream.h>
class Complex
{
	float real;
	float imag;
public:
	Complex(float r=0,float i=0);
	Complex operator ++(int);
	Complex operator ++();
	friend ostream & operator <<(ostream &out,const Complex &obj);
};
Complex::Complex(float r,float i)
{
	real=r;
	imag=i;
}
Complex Complex::operator++(int)
{
	Complex temp(*this);
	imag++;
	real++;
	return temp;
}
Complex Complex::operator++()
{
	imag++;
	real++;
	return *this;
}
ostream & operator<<(ostream &out,const Complex &obj)
{
	out<<obj.real;
	if(obj.imag!=0)
	{
		out<<"+"<<obj.imag<<"i";
	}
	out<<endl;
	return out;
}
int main()
{
	Complex c1(10,20),c3,c4;
	c3=c1++;
	cout<<c3;
	cout<<c1;
	c4=++c1;
	cout<<c4;
	return 0;
}