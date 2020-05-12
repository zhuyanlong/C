#include <iostream>
using namespace std;
class Vehicle
{
protected:
 	int MaxSpeed;
	int Weight;
public:
	Vehicle(int m,int w)
	{
		MaxSpeed=m;
		Weight=w;
		cout<<"Constructing Vehicle...\n";
	}
	~Vehicle()
	{
		cout<<"Destructing Vehicle...\n";
	}
	void Run()
	{
		cout<<"The vehicle is running!\n";
	}
	void Stop()
	{
		cout<<"Please stop running!\n";
	}
	void Show()
	{
		cout<<"It's maxspeed is:"<<MaxSpeed<<endl;
		cout<<"It's weight is:"<<Weight<<endl;
	}
};
class Bicycle:virtual public Vehicle
{
protected:
	int Height;
public:
	Bicycle(int m,int w,int h):Vehicle(m,w)
	{
		Height=h;
		cout<<"Constructing Bicycle...\n";
	}
	~Bicycle()
	{
		cout<<"Destructing Bycycle...\n";
	}
	void Show()
	{
		cout<<"MaxSpeed="<<Vehicle::MaxSpeed<<"Weight="<<Vehicle::Weight<<endl;
		cout<<"It's height is:"<<Height<<endl;
	}
};
class Car:virtual public Vehicle
{
protected:
	int SeatNum;
public:
	Car(int m,int w,int s):Vehicle(m,w)
	{
		SeatNum=s;
		cout<<"Constructing Car...\n";
	}
	~Car()
	{
		cout<<"Destructing Car...\n";
	}
	void Show()
	{
		cout<<"MaxSpeed="<<Vehicle::MaxSpeed<<" Weight="<<Vehicle::Weight<<endl;
		cout<<"It/s seatnum is:"<<SeatNum<<endl;
	}
};
class MotorCycle:public Bicycle,public Car
{
public:
	MotorCycle(int m,int w,int h,int s):Vehicle(m,w),Car(2*m,2*w,2*s),Bicycle(3*m,3*w,3*h)
	{
		cout<<"Constructing MotoCycle...\n";
	}
	~MotorCycle()
	{
		cout<<"Destructing MotoCycle...\n";
	}
	void Show()
	{
		cout<<"It's maxspeed is:"<<Bicycle::MaxSpeed<<endl;
		cout<<"It's weight is:"<<Bicycle::Weight<<endl;
		cout<<"It's height is"<<Bicycle::Height<<endl;
		cout<<"It's seatnum is:"<<Car::SeatNum<<endl;
	}
};
int main()
{
/*	Bicycle b(10,20,30);
	b.Run();
	b.Stop();
	b.Show();
	Car c(30,60,50);
	c.Run();
	c.Stop();
	c.Show();
	return 0;*/
	MotorCycle mc(10,20,30,40);
	mc.Run();
	mc.Stop();
	mc.Show();
	return 0;
}