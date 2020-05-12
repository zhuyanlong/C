#include <iostream>
using namespace std;
class Date
{
	int year;
	int month;
	int day;
public:
	Date(int y=1999,int m=4,int d=25);
	Date(const Date &date);
	~Date();
	int Getyear();
	int Getmonth();
	int Getday();
	void Set(int y,int m,int d);
	void Display();
	void ModifyDate(int y,int m,int d);
};
Date::Date(int y,int m,int d)
{
	year=y;
	month=m;
	day=d;
	cout<<"Constructor"<<endl;
}
Date::Date(const Date &date)
{
	year=date.year;
	month=date.month;
	day=date.day;
	cout<<"copy constructor called"<<endl;
}
Date::~Date()
{
	cout<<"Destructor"<<endl;
}
int Date::Getyear()
{
	return year;
}
int Date::Getmonth()
{
	return month;
}
int Date::Getday()
{
	return day;
}
void Date::Set(int y,int m,int d)
{
	year=y;
	month=m;
	day=d;
}
void Date::Display()
{
	cout<<year<<"-"<<month<<"-"<<day<<endl;
}
void Date::ModifyDate(int y,int m,int d)
{
	year=y;
	month=m;
	day=d;
}