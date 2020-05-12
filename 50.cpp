#include <string>
#include <iostream>
using namespace std;
class Student
{
	char *specialty;
public:
	Student(char *pSpec=0);
	Student(const Student &r);
	~Student();
	void Show();
	Student & operator = (const Student &s);
};
Student::Student(char *pSpec)
{
	if(pSpec)
	{
		specialty=new char[strlen(pSpec)+1];
		strcpy(specialty,pSpec);
	}
	else specialty=0;
}
Student::Student(const Student &r)
{
	if(r.specialty)
	{
		specialty=new char[strlen(r.specialty)+1];
		strcpy(specialty,r.specialty);
	}
	else
		specialty=0;
}
Student::~Student()
{
	if(specialty)
		delete[]specialty;
}
void Student::Show()
{
	cout<<"specialty="<<specialty<<'\n';
}
Student & Student::operator=(const Student &s)
{
	if(specialty)
		delete[]specialty;
	if(s.specialty)
	{
		specialty=new char[strlen(s.specialty)+1];
		strcpy(specialty,s.specialty);
	}
	else
		specialty=0;
	return *this;
}
int main()
{
	Student zhang("computer");
	Student wang("LLL");
	wang=zhang;
	zhang.Show();
	wang.Show();
	return 0;
}