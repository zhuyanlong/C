#include <iostream.h>
class Matrix
{
private:
	int *m;
	int row;
	int col;
public:
	Matrix(int ,int);
	int & operator()(int ,int);
};
Matrix::Matrix(int r,int c)
{
	row=r;
	col=c;
	m=new int[row * col];
	for(int i=0;i<r*c;i++)
		*(m+i)=i;
}
int & Matrix::operator() (int r,int c)
{
	return (*(m+r*col+c));
}
int main()
{
	Matrix am(10,10);
	cout<<"am(2,3)="<<am(2,3)<<endl;
	am(2,3)=900;
	cout<<"am(2,3)="<<am(2,3)<<endl;
	return 0;
}