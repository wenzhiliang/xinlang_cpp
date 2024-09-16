#include<iostream>
using namespace std;

/**
 * 成员函数模板
 */

/**
 * 普通类的成员函数模板
 */
class A
{
public:
    template<typename T>
    void myft(T tmpt)
    {
        cout << tmpt << endl;
    }
};


int main()
{
    A a;
    a.myft(3);
}