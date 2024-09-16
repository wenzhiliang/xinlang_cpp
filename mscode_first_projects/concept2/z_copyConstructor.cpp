#include<iostream>
using namespace std;

class Time
{
public:
    Time()
    {
        cout << "调用了无参构造函数"<< endl;
    }
    Time(int tmphour)
    {
        Hour = tmphour;
        Minute = 59;
        Second = 59;
        cout << "调用单参构造函数"<< endl;
    }

    //copy constructor 
    Time(const Time& time)
    {
        cout << "调用了拷贝构造函数" << endl;
    }

    Time& operator=(const Time& tmpTime)
    {
        Hour = tmpTime.Hour;
        Minute = tmpTime.Minute;
        Second = tmpTime.Second;
        cout << "赋值运算符重载的函数体"<< endl;
        return *this;
    }

    int Hour;
    int Minute;
    int Second;
    Time(int tmphour, int tmpmin, int tmpsec)
    {
        Hour = tmphour;
        Minute = tmpmin;
        Second = tmpsec;
    }


};


// Time func()
// {
//     Time t;
//     cout << &t << endl;
//     return t;
// }


int main()
{
    //func();

    //Time myTime = func();
    //cout << "uuuuuuuuuuuuuuuuu"<< &myTime << endl;

    Time myTime;
    cout << "myTime address-----------:"<< &myTime << endl;
    {//调用拷贝构造函数的6种写法
        Time t1 = myTime;       cout << "t1:"<< &t1 << endl;
        Time t2 = {myTime};     cout << "t2:"<< &t2 << endl;
        Time t3(myTime);        cout << "t3:"<< &t3 << endl;
        Time t4{myTime};        cout << "t4:"<< &t4 << endl;
        Time t5 = Time(myTime); cout << "t5:"<< &t5 << endl;
        Time t6 = Time{myTime}; cout << "t6:"<< &t6 << endl;
    }
    
    Time myTime6;
    cout << "myTime6 address"<< &myTime6 << endl;

    myTime6 = myTime;
    cout << "myTime6 address"<< &myTime6 << endl;
}