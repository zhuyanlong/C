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
void fenbian(bop a,int i)      //大概是函数重载问题
{
    int j;
    for(j=0;j<3;j++)
    {
        if(a[j].preference==i)
        {
            switch(i)
            {
            case 0:
                cout<<a[j].fullname;
                break;
            case 1:
                cout<<a[j].title;
                break;
            case 2:
                cout<<a[j].bopname;
                break;
            }
        }
    }
}
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
    switch(ch)
    {
    case 'a':
        for(i=0;i<3;i++)
            cout<<a[i].fullname;           //不用写数组容量
        break;
    case 'b':
        for(i=0;i<3;i++)
            cout<<a[i].title;
        break;
    case 'c':
        for(i=0;i<3;i++)
            cout<<a[i].bopname;
        break;
    case 'd':
        for(i=0;i<3;i++)
        {
            fenbian(a,i);
        }
    };
    return 0;
}
