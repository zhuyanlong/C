#include "Date5.h"
Date &Fun(Date &pDate)
{
	pDate.ModifyDate(1971,6,14);
	cout<<"reference pDate:\n";
	pDate.Display();
	return pDate;
	pDate.Display();
}
int main()
{
	Date DateA(200),tDate;
	cout<<"Before right Fun,DateA:\n";
	DateA.Display();
	cout<<"Before right Fun,tDate:\n";
	tDate.Display();
	tDate=Fun(DateA);
	cout<<"after calling fun() DateA:";
	DateA.Display();
	cout<<"After right Fun,tDate:\n";
	tDate.Display();
	Fun(DateA)=Date(190,25,22);
	cout<<"After left Fun,DateA:\n";
	DateA.Display();
	cout<<"After left Fun,tDate:\n";
	tDate.Display();
	return 0;
}
