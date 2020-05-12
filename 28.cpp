#include <iostream>
using namespace std;
class Boy;
class Girl
{
	char name[25];
	int age;
public:
	Girl(char N[],int A);
	~Girl()
	{
		cout<<"Girl destructing...\n";
	}
	void print();
};
class Boy
{
	char name[25];
	int age;
public:
	Boy(char N[],int );
	~Boy()
	{
		cout<<"Boy constructing...\n";
	}	
	void print();
};
void Girl::print()
{
	cout<<name<<endl;
	cout<<age<<endl;
}
Boy::Boy(char N[],int A)
{
	strcpy(name,N);
	age=A;
}
void Boy::print()
{
	cout<<name<<endl;
	cout<<age<<endl;
}

Girl::Girl(char N[],int A)
{
	strcpy(name,N);
	age=A;
}
int main()
{
	Boy b("wangyu",18);
	b.print();
	Girl g("lifang",19);
	g.print();
	return 0;
}
