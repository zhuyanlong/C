#include <fstream>
#include <iostream>
using namespace std;
void main()
{
	ifstream ifile("E:\\abc.txt");
	if(!ifile)
	{
		cout<<"»µÁË"<<endl;
		return ;
	}
	ofstream ofile1("E:\\f1.txt");
	if(!ofile1)
	{
		cout<<"»µÁË°¡"<<endl;
		return ;
	}
	ofstream ofile2("E:\\f2.txt");
	if(!ofile2)
	{
		cout<<"f2"<<endl;
		return ;
	}
	char ch;
	while(ifile.get(ch))
		if(ch>='0'&&ch<='9')
			cout<<ch;
		else if(ch>='a'&&ch<='z')
			ofile1.put(ch);
		else
			ofile2.put(ch);
		ifile.close();
		ofile1.close();
		ofile2.close();
}