#include <iostream>
using namespace std;
int add(int a, int b);
int main()
{
	int x, y, sum;
	cout << "Please input x and y:" << "\n";
	cin >> x >> y;
	sum = add(x,y);
	cout << x << "+" << y << "=" << sum << "\n";
	return 0;
}