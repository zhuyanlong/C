#include <iostream>
using namespace std;
void Fun(int i=1,int j=5,int k=10);//��������ֵ
int main()
{
	Fun(20);         //�������Ҹ�ֵ
	Fun(20,30);
	Fun(20,30,40);
	return 0;
}
void Fun(int i,int j,int k)
{
	cout<<i<<" "<<j<<" "<<k<<endl;
}