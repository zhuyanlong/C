#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,i,z;
    for(x=1;;x++)                   //���ܴ�ԭ����ʼѭ�����ᵼ�¶���һЩ��
    {
        i=x+100;
        z=x+268;
     //   cout<<i<<"\t"<<sqrt(i)<<endl;
    //    cout<<(int)sqrt(i)<<endl;
        if(sqrt(i)==(int)sqrt(i))             //���ڽϴ�����ݣ����������ȥ��λ�����յ����޷��ж�
        {

            if(sqrt(z)==(int)sqrt(z))
                cout<<x<<endl;
        }
    }
    return 0;
}
