#include <iostream.h>
class Complex
{
	double real;
	double imag;
public:
	Complex(double r=0,double i=0);
	Complex operator++(int);
	friend ostream &operator<<(ostream &out,const Complex &obj);
	friend istream &operator>>(istream &out,Complex &obj);
};
Complex::Complex(double r,double i)
{
	real=r;
	imag=i;
}
Complex Complex::operator ++(int)
{
	Complex temp(*this);
	real++;
	imag++;
	return temp;
}
ostream &operator<<(ostream &out,const Complex &obj)
{
	out<<obj.real;
	if(obj.imag!=0)
		out<<"+"<<obj.imag<<"i";
	out<<endl;
	return out;
}
istream &operator>>(istream &in,Complex &obj)
{
	in>>obj.real;
	in>>obj.imag;
	return in;
}
void main()
{
	Complex b,c(3.2,7.8);
	cin>>b;
	cout<<b<<c;
	b=c++;
	cout<<b<<c;
}