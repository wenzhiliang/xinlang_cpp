#include<iostream>
using namespace std;

/**
 * 类模板偏特化
 */

template<typename T, typename U, typename W>
struct TCP
{
    TCP()
    {
        cout << "TCP泛化版本构造函数"<< endl;
    }
    void functest(){
        cout << "TCP泛化版本"<< endl;
    }
};

//数量上
template<typename U>
struct TCP<int,U,double>
{
    TCP()
    {
        cout << "TCP<int,U,double>偏特化版本构造函数"<< endl;
    }
    void functest(){
        cout << "TCP<int,U,double>偏特化版本"<< endl;
    }
};