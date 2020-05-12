#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char automobile[50];
    int year;
    double a_price;
    double d_price;
    ofstream outFile;
    outFile.open("d:\\carinfo.txt");
    cout<<"Enter the make and model of automobile:";
    cin.getline(automobile,50);
    cout<<"Enter the model year:";
    cin>>year;
    cout<<"Enter the original asking price:";
    cin>>a_price;
    d_price=0.913*a_price;
    cout<<fixed;            //控制使用浮点数，默认六位小数
    cout.precision(2);      //保留两位小数，单独使用时，是指数表示形式
//    cout.setf(ios_base::showpoint);       //使用小数，一位
    cout<<"Make and model: "<<automobile<<endl;
    cout<<"Year:"<<year<<endl;
    cout<<"Was asking $"<<a_price<<endl;
    cout<<"Now asking $"<<d_price<<endl;
    outFile<<fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile<<"Make and model: "<<automobile<<endl;
    outFile<<"Yeas: "<<year<<endl;
    outFile<<"Was asking $"<<a_price<<endl;
    outFile<<"Now asking $"<<d_price<<endl;
    outFile.close();
    return 0;
}
