#include <iostream>
using namespace std;
class Student
{
	char *name;
	int price1;
	int price2;
	int all1;
	int all2;
	char symbol;
public:
	char *getname();
	int getprice1();
	int getprice2();
	int getall1();
	int getall2();
	void Input();
	void Evaluate();
	void Output();
	Student(int pri1,int pri2,inta1,int a2,char sym);
};
Student::Student(int pri1,int pri2,int a1,int a2,char sym)
{
	price1=pri1;
	price2=pri2;
	all1=a1;
	all2=a2;
	symbol=sym;
}
char *Student::getname()
{
	return name;
}
int Student::getprice1()
{
	return price1;
}
int Student::getall1()
{
	return all1;
}
int Student::getall2()
{
	return all2;
}
void Student::Input()
{
	char *na;
	cout<<"����������";
	cin>>*na;
	name=na;
	cout<<"�����һ�����ò���ɼ���";
	cin>>price1;
	cout<<"����ڶ������ò���ɼ���";
	cin>>price2;
	cout<<"�������п��Գɼ�";
	cin>>all1;
	cout<<"������ĩ���Գɼ�";
	cin>>all2;
}
void Student::Evaluate()
{
	int a;
	char b;
	b='B';
	symbol=b;
	a=all2*0.5+all1*0.25+(price1+price2)*0.25;
	if(a>=90)
		b='A';
	else if(a<=89&&a>=80)
		b='B';
	else if(a<=79&&a>=70)
		b='C';
	else 
		b='D';

}
void Student::Output()
{
	cout<<symbol<<endl;
}
int main()
{
	Student Array[5];
	int i;
	for(i=0;i<5;i++)
	{
		Array[i].Input();
		Array[i].Evaluate();
	}
	for(i=0;i<5;i++)
		Array[i].Output();
	return 0;
}