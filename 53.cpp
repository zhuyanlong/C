#include <iostream>
#include <string>
using namespace std;
class employee
{
protected:
	string name;
	int ID;
	int basepay;
	int salary;
	int vocate;
public:
	employee()
	{
		cout<<"ְ����:";
		cin>>ID;
		cout<<"����:";
		cin>>name;
		cout<<"�������������:";
		cin>>vocate;
		salary=0;
	}
	virtual void pay()=0;
	virtual void show()=0;
};
class manager:virtual public employee
{
public:
	manager()
	{
		fixed_award=2000;
		factor=0.8;
		merit_pay=fixed_award*factor;
		basepay=20000;
	}
	void pay()
	{
		basepay=basepay-basepay*0.05*vocate;
		salary=basepay+merit_pay;
	}
	void show()
	{
		cout<<"����"<<name<<"���"<<ID<<"���¹���"<<salary<<endl;
	}
protected:
	double merit_pay;
	double fixed_award;
	double factor;
	int hours;
};
class technician:virtual public employee
{
public:
	technician()
	{
		hourly_salary=80;
		cout<<"�����뼼����Ա����ʱ��:";
		cin>>hours;
		merit_pay=hourly_salary*hours;
		basepay=10000;
	}
	void pay()
	{
		basepay=basepay-basepay*0.05*vocate;
		salary=basepay+merit_pay;
	}
	void show()
	{
		cout<<"������Ա"<<name<<"���"<<ID<<"���¹���"<<salary<<endl;
	}
protected:
	double merit_pay;
	int hours;
	int hourly_salary;
};
class developermanager:virtual public manager
{
public:
	developermanager()
	{
		basepay=20000-20000*0.05*vocate;
		merit_pay=10000;
	}
	void pay()
	{
		salary=basepay+merit_pay;
	}
	void show()
	{
		cout<<"��������"<<name<<"���"<<ID<<"���¹���"<<salary<<endl;
	}
protected:
	double salary;
	double basepay;
	double merit_pay;
};
int main()
{
	employee *p;
	cout<<"manager:"<<endl;
	manager mag1;
	cout<<"technician:"<<endl;
	technician tec1;
	cout<<"developermanager:";
	developermanager dev1;
	p=&mag1;
	p->pay();
	p->show();
	p=&tec1;
	p->pay();
	p->show();
	p=&dev1;
	p->pay();
	p->show();
	return 0;

}
