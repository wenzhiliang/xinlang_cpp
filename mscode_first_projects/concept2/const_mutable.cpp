#include<iostream>
using namespace std;

class Time
{
public:
    int Hour;
    int Minute;
    int Second;
    mutable int myHour;
    Time()
    {
        Hour = 12;
        Minute = 12;
        Second = 12;
        cout << "调用无参构造函数" << endl;
    }

    Time(int tmphour, int tmpmin, int tmpsec)
    {
        Hour = tmphour;
        Minute = tmpmin;
        Second = tmpsec;
        cout << "调用有参构造函数"<< endl;
    }

    void constFunc() const
    {
        myHour = 18;
        cout << "调用一个const成员函数" << endl;
    }

    void noone()
    {
        Hour = 25;
    }



};



int main()
{
    Time t = Time(59,59,59);
    t.noone();
    cout << t.Hour << " " << t.Minute << " " << t.Second << endl;
    t.constFunc();

    cout << "-------------------------------------------"<< endl;

    const Time t2 = Time(36,36,36);
    t.noone();//不报错，但其实根本没有执行
    t.constFunc();
    cout << t2.Hour << " " << t2.Minute << " " << t2.Second << endl;

    cout << "-------------------------------------------"<< endl;

    const Time t3(3,3,3);
    //t3.noone();//此时报错
    t3.constFunc();
    cout << t3.Hour << " " << t3.Minute << " " << t3.Second << endl;
    cout << t3.myHour << endl;

    cout << "-------------------------------------------"<< endl;

    // Time t4();//报错 无参构造函数好似不能这样构造对象
    // cout << t4.Hour << " " << t4.Minute << " " << t4.Second << endl;


}