#include <iostream>
using namespace std;
int main()
{
	ptr=new int[20];
	cout<<"Please input some integers:"<<endl;
	int i=0,j=0;
	for(i=0;i<20;i++)
	cin>>ptr[i];
	for(i=0;i<20;i++)
	{
		if(ptr[i]>0)
		j++;
	}
	cout<<"正数有"<<j<<"个"<<endl;
	j=0;
	for(i=0;i<20;i++)
	{
		if(ptr[i]<0)
		j++;
	}
	cout<<"负数有"<<j<<"个"<<endl;
	delete []ptr;
	return 0;
}