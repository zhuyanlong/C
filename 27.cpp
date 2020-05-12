#include <iostream>
using namespace std;
class Boy;
class Girl
{
	char name[25];
	int age;
public:
	Girl(char N[],int A);
	friend Boy;
	~Girl()
	{
		cout<<"Girl destructing...\n";
	}
	void print();
	void VisitBoy(Boy &);
	friend void VisitGirl(Girl &);
	friend void VisitBoyGirl(Boy &b,Girl &g);
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
	friend Girl;
	void print();
	friend void VisitBoy(Boy &);
	void VisitGirl(Girl &);
	friend void VisitBoyGirl(Boy &b,Girl &g);
};
void VisitBoyGirl(Boy &b,Girl &g)
{
	cout<<"Boy's name: "<<b.name<<endl;
	cout<<"Boy's age: "<<b.age<<endl;
	cout<<"Girl's name: "<<g.name<<endl;
	cout<<"Girl's age: "<<g.age<<endl;
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
void Girl::print()
{
	cout<<name<<endl;
	cout<<age<<endl;
}
void Girl::VisitBoy(Boy & b)
{
	cout<<"Boy's name: "<<b.name<<endl;
	cout<<"Boy's age: "<<b.age<<endl;
}
void Boy::VisitGirl(Girl & g)
{
	cout<<"Girl's name: "<<g.name<<endl;
	cout<<"Girl's age: "<<g.age<<endl;
}
int main()
{
	Boy b("wangyu",18);
	b.print();
	Girl g("lifang",19);
	g.print();
	g.VisitBoy(b);
	b.VisitGirl(g);
	VisitBoyGirl(b,g);
	return 0;
}
