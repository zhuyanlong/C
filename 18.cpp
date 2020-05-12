#include "Date3.h"
Date f(Date Q)
{
	Date R(Q);
	return Q;
}
int main()
{
	Date day1(2011,5,26);
	Date day3;
	Date day2(day1);
	Date day4=day2;
	day 3=day2;
	day3=f(day2);
	day3.Display();
	return 0;
}