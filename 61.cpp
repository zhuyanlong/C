#include <iostream.h>
#include <string.h>
#include <fstream.h>
void ReadFile(char *s);
void ChangFile(char *s1,char *s2);
int main()
{
	char s1[20],s2[20];
	cin>>s1>>s2;
	ChangFile(s1,s2);
	ReadFile(s2);
	return 0;
}
void ReadFile(char *s)
{
	char str[50];
	ifstream inf(s);
	if(!inf)
	{
		cout<<"error"<<endl;
	}
	inf.getline(str,50);
	cout<<str<<endl;
	inf.close();
}
void ChangFile(char *s1,char *s2)
{
	char ch;
	ifstream inf(s1);
	ofstream ouf(s2);
	while(inf!=0)
	{
		inf.get(ch);
		if(ch>='a'&&ch<='z')
			ch=ch-32;
		ouf.put(ch);
	}
	inf.close();
	ouf.close();
}