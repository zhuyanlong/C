#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int count=0;
    char ch;
    ifstream inFile;
    char filename[50];
    cout<<"Enter the filename:";
    cin>>filename;
    inFile.open(filename);
    while(!inFile.eof())
    {
        inFile>>ch;
        cout<<ch;
        count++;
    }
    cout<<endl;
    cout<<count;
    return 0;
}
