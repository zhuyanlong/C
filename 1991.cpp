#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char ch;
    do
    {
        cin>>ch;
        if((ch>='a')&&(ch<='z'))
            ch=toupper(ch);
        else if((ch>='A')&&(ch<='Z'))
            ch=tolower(ch);
        cout<<ch;
    }while(ch!='@');
    return 0;
}
