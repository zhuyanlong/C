#include "Date5.h"
Date DateA(1996,12,13),DateB(1971,9,21);
Date &other=DateA;
void f()
{
	DateA.Display();
	DateB.Display();
	other.Display();
}
int main()
{
	cout<<"改变前三者的值:"<<endl;
	f();
	other=DateB;
	cout<<"改变后三者的值:"<<endl;
	f();
	other=Date(1971,6,14);
	cout<<"再次改变后三者的值:"<<endl;
	f();
	return 0;
}
