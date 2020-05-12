#include <iostream>
using namespace std;
int main()
{
    int a=0,b=0,c=0,d=0,f=0;
    char ch;
    cin>>ch;
    switch(ch)
    {
case 'A':
    a++;
    break;
case 'B':
    b++;
    break;
case 'C':
    c++;
    break;
case 'D':
    d++;
    break;
default:
    f++;
    break;
        };
    cout<<f;
    return 0;
}
