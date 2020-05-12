#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Please enter one of the following choices:"<<endl;
    cout<<"c)carnivore\tp)pianist"<<endl;
    cout<<"t)tree     \tg)game"<<endl;
    do
    {
    cout<<"Please enter a c,p,t, or g:"<<endl;
    cin>>ch;
    }while((ch!='c')&&(ch!='p')&&(ch!='t')&&(ch!='g'));
    switch(ch)
    {
    case 'c':
        cout<<"car"<<endl;
        break;
    case 'p':
        cout<<"pig"<<endl;
        break;
    case 't':
        cout<<"tree"<<endl;
        break;
    case 'g':
        cout<<"game"<<endl;
        break;
    };
    return 0;
}
