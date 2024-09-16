#include<iostream>
using namespace std;
/**
 * 类模板偏特化 范围上
 * 
 */
template<typename T>
struct TCF
{
    TCF()
    {
        cout << "TCF泛化版本构造函数"<< endl;
    }
    void functest(){
        cout << "TCF泛化版本"<< endl;
    }
};

//1
template<typename T>
struct TCF<const T>
{
    TCF()
    {
        cout << "TCF<const T>特化版本构造函数"<< endl;
    }
    void functest(){
        cout << "TCF<const T>特化版本"<< endl;
    }
};

//2
template<typename T>
struct TCF<T*>
{
    TCF()
    {
        cout << "TCF<T*>特化版本构造函数"<< endl;
    }
    void functest(){
        cout << "TCF<T*>特化版本"<< endl;
    }
};

//3
template<typename T>
struct TCF<T&>
{
    TCF()
    {
        cout << "TCF<T&>特化版本构造函数"<< endl;
    }
    void functest(){
        cout << "TCF<T&>特化版本"<< endl;
    }
};

//4
template<typename T>
struct TCF<T&&>
{
    TCF()
    {
        cout << "TCF<T&&>特化版本构造函数"<< endl;
    }
    void functest(){
        cout << "TCF<T&&>特化版本"<< endl;
    }
};