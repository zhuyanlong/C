#include <iostream>
#include <string>
using namespace std;
class Student
{
	int age;
	char *name;
	public:
	Student(int m,char *n);
	Student();
	~Student();
	void SetName(int m,char *n);
	int Getage();
	char *Getname();
	void Display();
};
Student::Student(int m,char *n)
{
	age=m;
	if(n)
	{
		name=new char[strlen(n)+1];
		strcpy(name,n);
	}
}
Student::Student()
{}
Student::~Student()
{
	if(name)
	delete []name;
}
void Student::SetName(int m,char *n)
{
	age=m;
	strcpy(name,n);
}
int Student::Getage()
{
	return age;
}
char *Student::Getname()
{
	return name;
}
void Student::Display()
{
	cout<<"name:"<<name<<" age:"<<age<<endl;
}
int main()
{
	int i;
	Student st[3]={Student(18,"wang"),Student(19,"yu"),Student(20,"zhu")};
	for(i=0;i<3;i++)
	st[i].Display();
	return 0;
	
}