#include <iostream>
using namespace std;
template<class T1,class T2>
class Myclass
{
public:
	Myclass(T1 xx,T2 yy);
	void Print()
	{
		cout<<"x="<<x<<",y="<<y<<endl;
	}
private:
	T1 x;
	T2 y;
};
template <class T1,class T2>
Myclass<T1,T2>::Myclass(T1 xx,T2 yy)
{
	x=xx;
	y=yy;
}
int main()
{
	Myclass<int ,char> obj(10,'a');
	obj.Print();
	return 0;
}