#include <iostream>
#include <cctype>
using namespace std;
const int MAX=10;
int main()
{
    double ai[10];
    double donation;
    int i=0;
    int k,m=0;
    double average;
    double temp=0;
    while((i<MAX)&&(cin>>donation))         //��Ȼ����ʵ�֣���������������ʱ������
    {
        ai[i]+=donation;
        i++;
        temp+=donation;
    }
    k=i;
    average=temp/k;
    for(i=0;i<k;i++)
    {
        if(ai[i]>average)
            m++;
    }
    cout<<"average="<<average<<endl;
    cout<<"number:"<<m<<endl;
    return 0;
}
