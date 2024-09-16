#include<iostream>
using namespace std;
/**
 * 类的成员函数指针
 * 类的成员变量指针
 * 
 */

class CT
{
public:
    void func(int tmpvalue)
    {
        cout << "func普通成员函数被调用"<< tmpvalue << endl;
    }

    virtual void virtualFunc(int tmpvalue)
    {
        cout << "virtualFunc虚成员函数被调用"<< tmpvalue << endl;
    }

    static void staticFunc(int tmpvalue)
    {
        cout << "staticFunc静态成员函数被调用"<< tmpvalue << endl;
    }
    int m_a;
    //static int m_stca;
};



int main()
{
    void(CT::*fp)(int);
    fp = &CT::func;
    cout << &fp << endl;

    CT ct, *pct;
    pct = &ct;
    (ct.*fp)(100);
    (pct->*fp)(200);

    void(CT::*vfp)(int) = &CT::virtualFunc;
    (ct.*vfp)(100);
    (pct->*vfp)(300);

    void(*sfp)(int) = &CT::staticFunc;
    sfp(100);


    //类的成员变量指针
    int CT::*mp = &CT::m_a;
    cout << "--------------"<<&mp << endl;
    CT t;
    t.*mp = 189;
    cout << t.*mp << endl;
    cout << t.m_a << endl;



}