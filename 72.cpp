#include <iostream.h>
class Date
{
	int year,month,day;
public:
	Date(int y=2011,int m=12,int d=1);
	friend ostream & operator<<(ostream & out,const Date &);
	friend istream & operator>>(istream & in,Date &);
};
Date::Date(int y,int m,int d)
{
	year=y;
	month=m;
	day=d;
}
ostream & operator<<(ostream & out,const Date & obj)
{
	out<<obj.year;
	out<<"-";
	out<<obj.month;
	out<<"-";
	out<<obj.day<<endl;
	return out;
}
istream & operator>>(istream & in,Date & obj)
{
	cout<<"Please input year,month,day:\n";
	in>>obj.year;
	in>>obj.month;
	in>>obj.day;
	return in;
}
int main()
{
	Date d1,d2(2018,4,25),d3;
	cin>>d3;
	cout<<d1<<d2<<d3;
	return 0;
}