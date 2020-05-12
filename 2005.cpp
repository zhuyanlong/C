#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    int vowel=0,consonant=0;
    int other=0;
    string ch;
    cin>>ch;
    while(ch!="q")
    {
        cin>>ch;
        if(isalpha(ch[0]))
        {
            switch(ch[0])
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowel++;
                break;
            default:
                consonant++;
                break;
            };
        }
        else
            other++;
    }
    cout<<vowel<<" words begainning with vowels"<<endl;
    cout<<consonant<<" words begainning with consonants"<<endl;
    cout<<other<<" others";
    return 0;
}
