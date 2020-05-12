#include <iostream>
using namespace std;
int main()
{
    int m,n;
    int t;
    cin>>m>>n;
	if (n > m)
	{
		t = m;
		m = n;
		n = t;
	}
	int r = 1;
	while (n != 0)
	{
		r = n;
		n = m%n;
		m = r;
	}
	cout<<m<<endl;
	return 0;
}
