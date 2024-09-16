#include<iostream>
using namespace std;
/**
 * 单参构造函数 及其带来的隐式转换
 * 
 */
class Time
{
public:
    Time(int tmphour)
    {
        Hour = tmphour;
        Minute = 59;
        Second = 59;
        cout << "调用单参构造函数"<< endl;
    }
    int Hour;
    int Minute;
    int Second;
    explicit Time(int tmphour, int tmpmin, int tmpsec)
    {
        Hour = tmphour;
        Minute = tmpmin;
        Second = tmpsec;
    }
};

void func(Time myt)
{
    return ;
}


int main()
{
    Time myTime23 = 14;

    cout<< "-------------------"<< endl;

    Time myTime24 = (12,13,14,15,16);

    cout<< "-------------------"<< endl;

    myTime23 = 16;

    cout<< "-------------------"<< endl;    
    func(16);

    cout<< "************************"<< endl;

    


}