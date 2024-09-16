#include<iostream>
using namespace std;
/**
 * 函数模板特化:函数模板只能全特化，不能偏特化
 * 
 * 函数调用顺序：
 *     普通函数----函数模板特化版本----函数模板泛化版本
 * 
 */

//常规函数模板
template<typename T,typename U>
void tfunc(T& tmprv, U& tmprv2)
{
    cout << "tfunc泛化版本" << endl;
    cout << tmprv << endl;
    cout << tmprv2 << endl;
}

//函数模板的特化版本
template<>
void tfunc(int& tmprv, double& tmprv2)
{
    cout << "---------------begin-------------------" << endl;
    cout << "tfunc<int,double>特化版本" << endl;
    cout << tmprv << endl;
    cout << tmprv2 << endl;
    cout << "-----------end-----------------------" << endl;
}


void tfunc(int& tmprv, double& tmprv2)
{
    cout << "----begin----" << endl;
    cout << "tfunc普通函数" << endl;
    cout << "----end----" << endl;
}

//函数模板没法偏特化
// template<typename U>
// void tfunc<double, U>(double& tmprv, U& tmprv2)
// {

// }


int main()
{
    const char* p = "I Love China!";
    int i = 12;
    tfunc(p,i);


    int k = 12;
    double db = 15.8f;
    tfunc(k,db);

}