#include <iostream>
#include <cmath>
using namespace std;
struct polar
{
    double distance;
    double angle;
};
struct rect
{
    double x;
    double y;
};
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);
int main()
{
    rect rplace;
    polar pplace;
    cout<<"Enter the x and y values: ";
    cin>>rplace.x;
    while(cin>>rplace.y)          //因为定义的rplace是结构体，里面的数据类型均为double ,所以输入任意字母均会使程序结束
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout<<"Next two numbers (q to quit)";
    }
    cout<<"Done.\n";
    return 0;
}
polar rect_to_polar(rect xypos)
{
    polar answer;
    answer.distance=sqrt(xypos.x*xypos.x+xypos.y*xypos.y);
    answer.angle=atan2(xypos.y,xypos.x);
    return answer;
}
void show_polar(polar dapos)
{
    const double Rad_to_deg=57.29577951;
    cout<<"distance = "<<dapos.distance;
    cout<<", angle= "<<dapos.angle*Rad_to_deg;
    cout<<"degrees\n";
}
