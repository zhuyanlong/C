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
	cout<<"�ı�ǰ���ߵ�ֵ:"<<endl;
	f();
	other=DateB;
	cout<<"�ı�����ߵ�ֵ:"<<endl;
	f();
	other=Date(1971,6,14);
	cout<<"�ٴθı�����ߵ�ֵ:"<<endl;
	f();
	return 0;
}
