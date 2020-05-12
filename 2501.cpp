#include <iostream>
#include <cmath>
using namespace std;
double average(double,double);
int main()
{
    double x,y;
    double ave;
    cout<<"请输入两个数"<<endl;
    do
    {
        cin>>x;
        cin>>y;
        ave=average(x,y);
        cout<<ave<<endl;;
    }while(x!=0&&y!=0);
    return 0;
}

double average(double x,double y)
{
    return 2.0*x*y/(x+y);
}
