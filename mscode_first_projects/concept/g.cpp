#include<iostream>
using namespace std;

/**
 * 无参构造函数 explicit
 * 
 */
class Time
{
public:
    int Hour;
    int Minute;
    int Second;
    // explicit Time()
    // {
    //     Second = 33;
    //     cout << "调用无参构造函数" << endl;
    // }

    Time()
    {
        Second = 33;
        cout << "调用无参构造函数" << endl;
    }
};


int main()
{
    Time t0;
    cout << "t0 address:" << &t0 << endl;
    cout << "---------------------1"<< endl;

    Time t1();
    cout << *t1 << "   "<< &t1 << endl;
    cout << "t1 address:" << &t1 << endl;
    cout << "---------------------2"<< endl;

    Time t2 = Time();
    cout << "t2 address:" << &t2 << endl;
    cout << "---------------------3"<< endl;
    

    Time* t3 = new Time();
    cout << "---------------------4"<< endl;

    Time t4{};
    //Time t = {};
    cout << "---------------------5"<< endl;
   
}