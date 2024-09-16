#include<iostream>

using namespace std;
int main()
{
    int i = 100;
    int &a = i;
    a = 101;
    cout << "a value:"<<a << endl;
    cout << "i value:"<< i << endl;


    int m = 128;
    const int& b = m;
    //b = 129;报错：表达式必须是可修改的左值
    m = 45;
    cout << m << "---" << b << endl;


    const int n = 256;
    
    //int& c = n;报错：将 "int &" 类型的引用绑定到 "const int" 类型的初始值设定项时，限定符被丢弃
    const int& d = n;
    //d = 233;报错：assignment of read-only reference 'd'
    cout << d << endl;

    //字面值初始化常量引用----------有啥用法？？？
    const int& f = 156;
    //f = 500;报错：表达式必须是可修改的左值


}