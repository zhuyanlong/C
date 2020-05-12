#include <iostream>
using namespace std;
int main()
{

    int num;
    cin>>num;
    int a[num];
    int i;
    int j;
    int k;
    int sum=0;
    int judge=0;
    for(i=0;i<num;i++)
        cin>>a[i];
    int max;
    max=a[0];
    for(j=1;j<=num;j++)
    {
        for(i=0;i<num;i++)
        {
            for(k=i;k<j;k++)
                sum+=a[k];
            if(sum>max)
                max=sum;
            sum=0;
        }
        if(a[j-1]>=0)
            judge=1;
    }
    if(judge==1)
        cout<<max<<endl;
    else
        cout<<"0";
    return 0;
}
