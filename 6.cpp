#include <iostream>
#include <iomanip>
using namespace std;
int sum=5000;
int main()
{
//	int sum=200在main内,{}外调用此sum
	int arr[3]={10,20,30};
	{
		int i,sum=0;
		for(i=0;i<3;i++)
			sum+=arr[i];
		cout<<"sum="<<sum<<endl;
		::sum+=sum;
		cout<<"全局sum="<<::sum<<endl;
	}
	sum*=2;
	cout<<"sum="<<sum<<endl;
	::sum+=sum;
	cout<<"全局sum="<<::sum<<endl;
	return 0;
}