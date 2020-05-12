#include <iostream>
using namespace std;
class student
{
private:
	int age;
	char *name;
public:
	student(int m,char *n);
	student();
	int Getage();
	char*Getname();
	void SetName(int m,char *n);
};
student::student(int m,char *n) 
{
	age=m;
	name=n;
}
student::student()
{}
int student::Getage()
{
	return age;
}
char *student::Getname()
{
	return name;
}
void student::SetName(int m,char *n)
{
	age=m;
	name=n;
}
int main()
{
	student arr[3];
	arr[0].SetName(18,"abc");
	arr[1].SetName(19,"def");
	arr[2].SetName(20,"ghi");
	cout<<arr[0].Getage()<<"  "<<arr[0].Getname()<<endl;
	cout<<arr[1].Getage()<<"  "<<arr[1].Getname()<<endl;
	cout<<arr[2].Getage()<<"  "<<arr[2].Getname()<<endl;
	return 0;
}