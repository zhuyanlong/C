#include <iostream>
using namespace std;
class test
{
private:
	int num1,num2;
public:
	void init(int n1,int n2);
	void print();
	int test::getnum1();
	int test::getnum2();
};
void test::init(int n1,int n2)
{
	num1=n1;
	num2=n2;
}
int test::getnum1()
{
	return num1;
}
int test::getnum2()
{
	return num2;
}
void test::print()
{
	cout<<num1<<"-"<<num2<<"="<<num1-num2<<endl;
}
int main()
{
	test a;
	a.init(35,15);
	a.print();
	return 0;
}