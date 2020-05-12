#include <iostream>
#include <cmath>
const double pi=3.1515926;
using namespace std;
int main()
{
    double x;
    int i;
    double a;
    for(i=0;i<6;i++)
    {
        cin>>x;
        a=sin(x*pi/180);
        cout<<a<<" ";
    }
    return 0;
}
