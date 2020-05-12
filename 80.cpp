#include <iostream.h>
#include <fstream.h>
int main()
{
	ifstream inf("d:\\source.txt");
//	ofstream outf1("e:\\source.txt");
	if(!inf)
	{
		cout<<"error"<<endl;
		return 0;
	}
	char ch;
	ofstream outf2("d:\\obj.txt");
	if(!outf2)
	{
		cout<<"error"<<endl;
		return 0;
	}
	while(inf.get(ch))
	{
		if(ch>='a'&&ch<='z')
			ch=ch-32;
		outf2.put(ch);
	}
/*	while(inf.get(ch))
	{
		outf2.put(ch);
	}*/
	inf.close();
//	outf1.close();
	outf2.close();
	return 0;
}
