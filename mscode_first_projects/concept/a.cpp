#include<iostream>
using namespace std;

/**
 * 函数返回指针类型
 * 
 */
//返回局部变量，局部变量为static
int* myfunc()
{
    static int m = 9;
    cout << "m address is:"<< &m << endl;
    return &m;
}

int* myfunc2()
{
    int* sum = NULL;
    sum = new int;
    *sum = 7;
    return sum;
}

int* myfunc3()
{
    int i = 100;
    cout << "在函数内部,局部变量i的地址为:" << &i << endl;
    int* p = &i;
    return p;
}

int main()
{
    int* p;
    cout << p << endl;;   
    p = myfunc();
    cout << "p address is:"<<p << endl;
    cout << *p << endl;

    cout << "-----------------"<< endl;
    int* p1;
    cout << p1 << endl;
    p1 = myfunc2();
    cout <<"p1 address is:"<< p1 << endl;

    cout << "-----------------"<< endl;
    int* p2 = myfunc3();
    cout <<"p2 address is:"<< p2 << endl;


    cout << "-------------------"<< endl;
    int i = 89;
    cout << "i address is:"<< &i << endl;

}
