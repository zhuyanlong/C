#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x;
    for(x=1;100*pow(1.05,x)<=((10*x)+100);x++)
        cout<<100*pow(1.05,x)<<endl;
    cout<<x<<endl;
    return 0;
}
