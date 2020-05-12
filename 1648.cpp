#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str;
    int x=0;
    do
    {
        cin>>str;
        x++;
    }while(str!="done");
    cout<<x-1;
    return 0;
}
