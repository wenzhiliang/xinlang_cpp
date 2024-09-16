#include<iostream>
using namespace std;
/**
 * 构造函数
 * 
 */

class Time
{
public:
    int Hour;
    int Minute;
    int Second;
    Time(int tmphour, int tmpmin, int tmpsec)
    {
        Hour = tmphour;
        Minute = tmpmin;
        Second = tmpsec;
        cout << "调用有参构造函数"<< endl;
    }

    Time()
    {
        cout << "调用无参构造函数"<< endl;
    }
};

int main()
{
    Time myTime = Time(12,13,52);
  
    Time myTime3 = Time{12,13,52};

    Time myTime2(12,13,52);

    Time myTime4{12,13,52};

    Time myTime5 = {12,13,52};

    cout << "-----------------"<< endl;

    Time* t = new Time(12,13,14);
    Time* t1 = new Time{12,13,14};

    Time* pt = new Time();


}
