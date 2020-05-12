#include <iostream>

const int size=10;
int scan(double *);
double average(double *,int);
void print(double *,int,double);

using namespace std;

int main()
{
    double arr[size];
    double ave;
    int i;
    i=scan(arr);
    ave=average(arr,i);
    print(arr,i,ave);
}

int scan(double *arr)
{
    int i=0;
    cout<<"请输入高尔夫成绩，输入q退出：";
    while(cin>>arr[i])
        i++;
    return i;
}

double average(double *arr,int i)
{
    int j;
    double sum=0;
    for(j=0;j<i;j++)
    {
        sum+=arr[j];
    }
    return sum/i;
}

void print(double *arr,int i,double ave)
{
    int j;
    for(j=0;j<i;j++)
        cout<<arr[j]<<" ";
    cout<<endl;
    cout<<"平均成绩为："<<endl;
    cout<<ave;
}
