#include <iostream>
using namespace std;
int main()
{
    string a[12]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    int b[12];
    int i;
    int x=0;
    for(i=0;i<12;i++)
    {
        cout<<a[i]<<endl;
        cin>>b[i];
    }
    for(i=0;i<12;i++)
    {
        x+=b[i];
    }
    cout<<x;
    return 0;
}
