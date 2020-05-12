#include <iostream>
#include <string>
using namespace std;
class Student
{
	int credit;
	int age;
public:
	Student(int c=9001,int a=19);
	~Student();
	void print();
};
class Postgard:public Student
{
	char *name;
public:
	Postgard(int c,int a,char *n):Student(c,a)
	{
		if(*n)
		{
			name=new char[strlen(n)+1];
			strcpy(name,n);
		}
	}
	void print();
};
Student::Student(int c,int a)
{
/*	if(*n)
	{
		name=new char[strlen(n)+1];
		strcpy(name,n);
	}*/
	credit=c;
	age=a;
}
Student::~Student()
{
//	if(*name)
	//	delete []name;
}
void Student::print()
{
//	cout<<"name:"<<name<<endl;
	cout<<"age:"<<age<<endl;
}
void Postgard::print()
{
	Student::print();
//	cout<<"credit:"<<credit<<endl;
	cout<<"name:"<<name<<endl;
}
void main()
{
	Postgard pg(9001,24,"zhangsan");
	pg.print();
}
