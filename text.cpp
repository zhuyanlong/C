#include <iostream>
#include <cctype>
#include <array>
using namespace std;
const int MAX=10;
void main62()
{
    //double donation[MAX];
    array<double,MAX>donation={0};
    char ch;
    //for(int i=0;i<MAX;i++)
    //{
        cout<<"Please enter the number:"<<endl;
        double sum=0;
        double avg=0;
        double count=0;
        //cin.get(ch);
        cin.sync();
        int i=0;
        //double temp;
        double temp;

        cout<<"Please enter the "<<i+1<<" number:";
        while(i<MAX&&cin>>temp) //�������������ʱ���ܻ��쳣������ʲôԭ���أ�
        {
            donation[i]=temp;
            sum+=donation[i];
            i++;
            cout<<"Please enter the "<<i+1<<" number:";

        }
        cin.sync();
        avg=sum*1.0/i;
        for(int j=0;j<i;j++)
        {
            if(donation[j]>avg)
                count++;
        }
        cout<<"The sum is "<<sum<<endl;
        cout<<"The avg is "<<avg<<endl;
        cout<<"Have  "<<count<<"  number is bigger than avg";
        //cin.get(); //��Ҫ��cin.get()����Ϊ��ֻ�Ƕ�ȡһ���ַ����������������˶����������ĸ��
        //cin.get();//���ںܿ�ͻ���ʧ����
        getchar();
        getchar(); //��getchar()������system("pause")
        //system("pause");


    }
