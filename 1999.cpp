#include <iostream>
using namespace std;
int main()
{
    int line=0;
    char ch;
    while(cin.get(ch))
    {
        if(ch=='Q')
            return 0;
        line++;
    }
    cout<<line;
    return 0;
}
