#include <iostream>
using namespace std;
int main()
{
    int i;
    double x;
    double a[3];
    int j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[j];
        }
        a[1]+=a[2]/60;
        if(a[1]>=60)
        {
            a[0]++;
            a[1]-=60;
        }
        a[0]+=a[1]/60;
        x=a[0];
        cout<<x;
    }
    return 0;
}
