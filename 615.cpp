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
    cout<<fixed;            //����ʹ�ø�������Ĭ����λС��
    cout.precision(2);      //������λС��������ʹ��ʱ����ָ����ʾ��ʽ
//    cout.setf(ios_base::showpoint);       //ʹ��С����һλ
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
