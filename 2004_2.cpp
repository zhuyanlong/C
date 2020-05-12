#include <iostream>
using namespace std;
const int strsize=20;
struct bop
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};
int main()
{
    char ch;
    int i;
    bop a[3]={
    "wangermazi","GBA","LALA",0,
    "SADdsa","sda","dsadas",1,
    "dsada","dasad","sdsad",2
    };
    cout<<"Benevolent Order of Programmers Report:"<<endl;
    cout<<"a.display by name   \tb.display by title"<<endl;
    cout<<"c.display by bopname\td.display by preference" <<endl;
    cout<<"q.quit"<<endl;
    cout<<"Enter your choice:"<<endl;
    cin.get(ch);
    if(ch!='q')
    {
        do
        {
            switch(ch)
            {
            case 'a':
                for(i=0;i<3;i++)
                    cout<<a[i].fullname<<endl;           //不用写数组容量
                break;
            case 'b':
                for(i=0;i<3;i++)
                    cout<<a[i].title<<endl;
                break;
            case 'c':
                for(i=0;i<3;i++)
                    cout<<a[i].bopname<<endl;
                break;
            case 'd':
                for(i=0;i<3;i++)
                {
                    switch(a[i].preference)
                    {
                    case 0:
                        cout<<a[i].fullname<<endl;
                        break;
                    case 1:
                        cout<<a[i].title<<endl;
                        break;
                    case 2:
                        cout<<a[i].bopname<<endl;
                        break;
                    }
                }
                break;
            };
        cout<<"Next chice:"<<endl;
        cin.get(ch);
        }while(ch!='q');
    }
    cout<<"bye"<<endl;
    return 0;
}
