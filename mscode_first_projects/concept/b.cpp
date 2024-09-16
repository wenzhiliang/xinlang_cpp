#include<iostream>
using namespace std;
/**
 * 函数返回引用类型
 */

int myfunc()
{
    int i = 100;
    cout << "局部变量的地址:"<< &i << endl;
    return i;
}

//reference to local variable 'i' returned.
//返回一个局部变量的引用是非法的
// int& myfunc1()
// {
//     int i = 9;
//     cout << "在函数内部,局部变量i的地址为:"<< &i << endl;
//     return i;
// }


int& myfunc2()
{
    int i = 9;
    cout << "在函数内部,局部变量i的地址为:"<< &i << endl;
    int& m = i;
    cout << "m address is:" << &m << endl;
    return m;
}

int i3;
int& myfunc3()
{
    i3 = 89;
    cout << "i3 address is:"<< &i3 << endl;
    int& m3 = i3;
    return m3;
}


int main()
{
    int i1 = myfunc();
    cout << "定义一个变量返回接收函数返回值:"<< &i1 << endl;
    cout << "常规函数  常规接收"<< i1 << endl;

    const int& i2 = myfunc();
    cout << "常规函数  常量引用接收"<< &i2 << endl << endl;


    /**
     * 对于返回类型为引用的，分两方面测试 
     * 1 接收的为普通变量
     * 2 接收的为引用
     * 
     */


    //有问题 内存里面的内容被清空了
    cout << "---------------------------------------------"<< endl;
    int& h = myfunc2();
    cout << "h address is:"<< &h <<  endl;
    cout << h << endl;

    //失其本意 指向了复制的内容
    cout << "--------------------"<< endl;
    int g = myfunc2();
    cout << "g address is:"<< &g <<  endl;
    cout << g << endl << endl;;



    cout << "函数返回的是一个全局变量:"<< endl;
    //创建一个新对象
    int f0 = myfunc3();
    cout << "f0 address is:"<< &f0 << endl;
    //创建一个新引用来接收
    int& f = myfunc3();
    cout << "f address is:"<< &f << endl;

}