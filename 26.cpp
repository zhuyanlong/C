#include <iostream>
using namespace std;
class TIME
{
	int hour;
	int minute;
	int second;
public:
	TIME::TIME(int h=0,int m=0,int s=0);
	TIME(const TIME &ob);
	~TIME();
	int gethour();
	int getminute();
	int getsecond();
	void printtime();
	void increaseonesecond();
	void changetime();
};
TIME::TIME(int h,int m,int s)
{
	cout<<"constructing\n";
	hour=h;
	minute=m;
	second=s;
}
TIME::TIME(const TIME &ob)
{
	cout<<"Copy constructing"<<endl;
	hour=ob.hour;
	minute=ob.minute;
	second=ob.second;
}
TIME::~TIME()
{
	cout<<"Destructing..."<<endl;
}
void TIME::changetime()
{
	cin>>hour;
	cin>>minute;
	cin>>second;
}
int TIME::gethour()
{
	return hour;
}
int TIME::getminute()
{
	return minute;
}
int TIME::getsecond()
{
	return second;
}
void TIME::printtime()
{
	cout<<hour<<":"<<minute<<":"<<second<<endl;
}
//void f(TIME *t)
//{
//	t->printtime();
//	cout<<"call f\n";
//}
void TIME::increaseonesecond()
{
	if(second==60)
	{
		hour--;
		second=0;
	}
	else
		second++;
}
int main()
{
	TIME a,b(1),c(3,3),d(3,4,5);
	TIME t;
	a.printtime();
	b.printtime();
	c.printtime();
	d.printtime();
	d.increaseonesecond();
	cout<<"增加一秒后的结果:"<<endl;
	d.printtime();
	cout<<"请输入你想得到的时间："<<endl;
	a.changetime();
	a.printtime();
	cout<<d.hour<<d.minute<<d.second<<endl;
	//f(&t);
	return 0;
}