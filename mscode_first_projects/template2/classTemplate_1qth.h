#include<iostream>
using namespace std;

/**
 * 类模板全特化 
 */
template<typename T,typename U>
struct TC
{
    TC()
    {
        cout << "TC泛化版本构造函数" << endl;
    }
    void functest(){
        cout << "TC泛化版本" << endl;
    }
};

//写一个特化版本
template<>
struct TC<int,int>
{
    TC()
    {
        cout<< "TC<int,int>特化版本构造函数"<< endl;
    }
    void functest(){
        cout << "TC<int,int>特化版本"<< endl;
    }
};

//再写一个特化版本
template<>
struct TC<double,int>
{
    TC()
    {
        cout << "TC<double,int>特化版本构造函数"<< endl;
    }
    void functest(){
        cout << "TC<double,int>特化版本"<< endl;
    }
};

//特化类模板的成员函数
template<>
void TC<double,double>::functest()
{
    cout << "TC<double,double>的functest()特化版本"<< endl;
}