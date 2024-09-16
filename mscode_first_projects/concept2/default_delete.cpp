#include<iostream>
using namespace std;

class Time
{
public:
    // Time()
    // {

    // }
    // Time(int tmphour)
    // {
    //     Hour = tmphour;
    //     Minute = 59;
    //     Second = 59;
    //     cout << "调用单参构造函数"<< endl;
    // }
    int Hour;
    int Minute;
    int Second;
    // Time(int tmphour, int tmpmin, int tmpsec)
    // {
    //     Hour = tmphour;
    //     Minute = tmpmin;
    //     Second = tmpsec;
    // }


    //Time() = default;

    //Time() = delete;
};

int main()
{

    Time t;
    cout << t.Hour << endl;

}