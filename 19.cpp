#include <string>
#include <iostream>
using namespace std;
class student
{
	char *specialty;
public:
	student(char *pSpec=0);
	~student();
	void Show();
	student(const student &r);
};
student::student(const student &r)
{
	if(r.specialty)
	{
		specialty=new char[strlen(r.specialty)+1];
		strcpy(specialty,r.specialty);
	}
	else specialty=0;
}
student::student(char *pSpec)
{
	if(pSpec)
	{
		specialty=new char(strlen(pSpec)+1);
		strcpy(specialty,pSpec);
	}
	else specialty=0;
}
student::~student()
{
	if(specialty)
		delete[]specialty;
}
void student::Show()
{
	cout<<"specialty="<<specialty<<'\n';
}
int main()
{
	student zhang("computer");
	student wang(zhang);
	zhang.Show();
	wang.Show();
	return 0;
}