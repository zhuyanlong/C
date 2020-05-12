#include <iostream>
#include <string>
using namespace std;
class BookCard
{
	char *stuName;
	int id;
	int number;
public:
	BookCard(char *s="zhu",int i=0,int n=0);
	~BookCard();
	void display();
	void borrow();
	void  restore();
};
BookCard::BookCard(char *s,int i,int n)
{
	if(*s)
	{
		stuName=new char[strlen(s)+1];
		strcpy(stuName,s);
	}
	id=i;
	number=n;
}
BookCard::~BookCard()
{
	if(*stuName)
		delete []stuName;
}
void BookCard::display()
{
	cout<<"stuName:"<<stuName<<" id:"<<id<<" number:"<<number<<endl;
}
void BookCard::borrow()
{
	if(number<=10)
		number++;
	else
		cout<<"sorry"<<endl;
}
void BookCard::restore()
{
	number--;
}
int main()
{
	BookCard A("lilei",1001,9),B;
	B.display();
	A.display();
	A.borrow();
	A.display();
	A.restore();
	A.display();
	return 0;
}