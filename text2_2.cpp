#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i,x,y;
    for(i=1;;i++)
    {
        x=sqrt(i+100);
        y=sqrt(i+268);
        if((x*x==i+100)&&(y*y==i+268))
            cout<<i<<endl;
    }
    return 0;
}
