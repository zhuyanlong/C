//��������
#include <iostream>
using namespace std;
int square(int x)
{
	return x*x;
}
float square(float x)
{
	return x*x;
}
double square(double x=1.5)
{
	return x*x;
}
int main()
{
	cout<<"square()="<<square()<<endl; //Ĭ������µ�ȡdouble
	cout<<"square(10)="<<square(10)<<endl;//��������µ�ȡint
	cout<<"square(2.5f)="<<square(2.5f)<<endl;//��׺f����float
	cout<<"square(1.1)="<<square(1.1)<<endl;//�������޺�׺����double
	return 0;
}