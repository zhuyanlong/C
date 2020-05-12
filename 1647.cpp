#include <iostream>
using namespace std;
struct car
{
    string make;
    int year;
};
int main()
{
    int x;
    int i;
    cout<<"How many cars do you wish to catelog:"<<endl;;
    cin>>x;
    car *ps=new car[x];
    for(i=0;i<x;i++)
    {
        cout<<"Car #"<<i+1<<":"<<endl;
        cout<<"Please enter the make:";
        cin.get(ps[i].make,50);
        cout<<"Please enter the year made:";
        cin>>ps[i].year;
    }
    cout<<"Here is your collection:"<<endl;
    for(i=0;i<x;i++)
    {
        cout<<ps[i].year<<" "<<ps[i].make<<endl;

    }
    return 0;
}
