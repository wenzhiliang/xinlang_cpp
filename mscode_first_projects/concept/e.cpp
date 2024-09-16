#include<iostream>
using namespace std;

/**
 * @brief 
 * 
 */
class Time
{
public:
    Time()
    {
        Hour = 12;
        Minute = 59;
        Second = 59;
        initMillTime(59);
        cout << "调用无参构造函数"<< endl;
    }
    int Hour;
    int Minute;
    int Second;
    void initTime(int tmphour, int tmpmin, int tmpsec)
    {
        Hour = tmphour;
        Minute = tmpmin;
        Second = tmpsec;
    }
private:
    int Millisecond;
    void initMillTime(int mls)
    {
        Millisecond = mls;
    }
};

int main()
{
    Time myTime10 = Time();

    Time myTime12;     //只有对象名，但还是调用无参构造函数

    Time myTime13 = Time{};

    Time myTime14{};

    Time myTime15 = {};

    //不存在从int到Time的适当构造函数
    //Time myTime23 = 14;
}