#include <iostream.h>
class Array
{
private:
	int *ptr;
	int size;
public:
	Array(int arraySize=10);
	Array(const Array &);
	~Array();
	void print();
	int getSize() const;
	Array operator++();
	Array &operator+=(Array &);
};
Array::Array(int arraySize)
{
	size=arraySize;
	ptr=new int[size];
	for(int j=0;j<size;j++)
		ptr[j]=j;
}
Array::Array(const Array &init)
{
	size=init.size;
	ptr=new int[size+1];
	for(int j=0;j<size;j++)
		ptr[j]=init.ptr[j];
}
Array::~Array()
{
	delete[]ptr;
}
void Array::print()
{
	for(int j=0;j<size;j++)
		cout<<ptr[j]<<",";
	cout<<endl;
}
int Array::getSize() const
{
	return size;
}
Array Array::operator++()
{
	for(int j=0;j<size;j++)
		++ptr[j];
	return *this;
}
Array & Array::operator+=(Array &v)
{
	int temp=v.size>size?size:v.size;
	for(int j=0;j<temp;j++)
		ptr[j]=ptr[j]+v.ptr[j];
	return *this;
}
int main()
{
	Array a(5),b(10),c(8);
	cout<<"original a array:"<<endl;
	a.print();
	cout<<"original b array:"<<endl;
	b.print();
	cout<<"original c array:"<<endl;
	c.print();
	a+=b;
	cout<<"after added with b,a array:"<<endl;
	a.print();
	c.operator+=(b);
	cout<<"after added with b,b array:"<<endl;
	c.print();
	++b;
	cout<<"after ++,b array:"<<endl;
	b.print();
	return 0;
}