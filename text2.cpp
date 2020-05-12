#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,i,z;
    for(x=1;;x++)                   //不能从原数开始循环，会导致丢掉一些数
    {
        i=x+100;
        z=x+268;
     //   cout<<i<<"\t"<<sqrt(i)<<endl;
    //    cout<<(int)sqrt(i)<<endl;
        if(sqrt(i)==(int)sqrt(i))             //对于较大的数据，计算机会舍去几位，最终导致无法判断
        {

            if(sqrt(z)==(int)sqrt(z))
                cout<<x<<endl;
        }
    }
    return 0;
}
