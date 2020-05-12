#include <iostream>
using namespace std;
template<class T>
T Max (T a,T b)
{
	return a>b?a:b;
}
int main()
{
	cout<<"Max(2,8) is "<<Max(2,8)<<endl;
	cout<<"Max(2,int('8')) is "<<Max(2,int('8'))<<endl;
	return 0;
}