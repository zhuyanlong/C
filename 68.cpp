#include <iostream>
#include <string>
using namespace std;
class Car
{
	char brand[10];
	char model[20];
	int year;
	double price;
	public:
	Car(char *,char *,int ,double);
	char *Getbrand();
	char*Getmodel();
	int Getyear();
	double Getprice();
	void Display();
};
Car::Car(char *b,char *m,int y,double p)
{
	strcpy(brand,b);
	strcpy(model,m);
	year=y;
	price=p;
}
char *Car::Getbrand()
{
	return brand;
}
char *Car::Getmodel()
{
	return model;
}
int Car::Getyear()
{
	return year;
}
double Car::Getprice()
{
	return price;
}
void Car::Display()
{
	cout<<"The car's brand is: "<<brand<<endl;
	cout<<"model: "<<model<<endl;
	cout<<"year: "<<year<<endl;
	cout<<"price: "<<price<<endl;
}
int main()
{
	Car A("BMW","704",2009,1400000);
	Car B("benz","s600",2009,2000000);
	A.Display();
	B.Display();
	return 0;
}