#include <iostream.h>
#include <fstream.h>
#include <string.h>
void CreateBiFile(char *filename);
void ReadBiFile(char *filename);
class Student
{
	char number[20];
	char name[10];
	char sex[5];
	int score;
public:
	Student(char *nu,char *na,char *se,int s);
	Student()
	{}
	friend ostream & operator<<(ostream &out,const Student &s);
};
Student::Student(char *nu,char *na,char *se,int s)
{
	strcpy(number,nu);
	strcpy(name,na);
	strcpy(sex,se);
	score=s;
}
ostream & operator<<(ostream &out,const Student &s)
{
	cout<<s.number<<" "<<s.name<<" "<<s.sex<<" "<<s.score<<endl;
	return out; 
}

void CreateBiFile(char *filename)
{
	ofstream out(filename);
	Student st[3]={Student("B14040916","zhuzhu","male",60),Student("B14040917","oldliu","male",70),Student("B14040918","yangyang","male",80)};
	out.write((char *)&st,sizeof(Student)*3);
	out.close();

}
void ReadBiFile(char *filename)
{
	Student stu[3];
	int i=0;
    ifstream in(filename);
	while (!in.eof( ))
	{
		in.read((char *)&stu[i++],sizeof(Student));
	}
	for(int j=0;j<i-1;j++)
		cout<<stu[j];
	in.close();
}
int main()
{
	CreateBiFile("stu.dat");
	ReadBiFile("stu.dat");
	return 0;
}