#include<iostream.h>
int main() 
{ 	try 
	{ 		
		throw("error");
 	} 
//********error******** 
	catch(char *s) 
	{ 		
		cout<<s<<endl;
	} 
	try 
	{
		throw((int)0);
	} 
//********error******** 
	catch(int i) 
	{
		cout<<i<<endl;
	} 
	try 
	{ 	
		throw(0);
		throw("error");
	} 
//********error******** 
	catch(int) 
	{ 
		cout<<"ERROR"<<endl; 
	} 
	return 0; 
}
