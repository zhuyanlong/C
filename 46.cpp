#include <iostream>
#include <string>
using namespace std;
class Student
{
	char name[20];
	int no;
public:
	Student();
	Student(char *sname,int n);
	void print();
	void print(int n);
};
Student::Student()
{
	no=0;
	strcpy(name,"同学");
}
Student::Student(char *sname,int n)
{
	no=n;
	strcpy(name,sname);
}
void Student::print()
{
	cout<<name<<" "<<no<<endl;
}
void Student::print(int n)
{
	cout<<name<<" B"<<n<<no<<endl;
}
int main()
{
	Student s1;
	Student s2("学生",22);
	s1.print();
	s2.print();
	s2.print(2008);
	return 0;
}