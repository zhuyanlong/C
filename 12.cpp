#include <iostream>
using namespace std;
class Date
{
private:
	double longth;
	double weight;
	double height;
public:
	Date(double,double,double);
	double calculate();
};
Date::Date(double l,double w,double h)
{
	longth=l;
	weight=w;
	height=h;
}
double Date::calculate()
{
	double s;
	s=l*w*h;
	return s;
}
int main()
{
	Date DateA(1,2,3);
	cout<<DateA.calculate()<<endl;
	return 0;
}
