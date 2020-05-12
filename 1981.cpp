#include <iostream>
using namespace std;
int main()
{
    int spaces;
    int newlines;
    char ch;
    cin.get(ch);
    while(ch!='#')
    {
        if(ch==' ')
            spaces++;
        else if(ch=='\n')
            newlines++;
        cin.get(ch);
    }
    return 0;
}
