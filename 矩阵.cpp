#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>n>>m;
    int arr[n][m];
    int brr[m][n];
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        cin>>arr[i][j];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        brr[i][j]=arr[j][i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cout<<arr[i][j]<<"    ";
        cout<<endl;
    }
    cout<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            cout<<brr[i][j]<<"    ";
        cout<<endl;
    }
    return 0;
}
