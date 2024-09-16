#include<stdio.h>
#include<iostream>

using namespace std;
//常量指针：p指向的内容不能通过p来修改
int main()
{
    int a = 6;
    const int * p = &a;
    cout << *p << endl;//6

    int b = 12;
    p = &b;
    cout << *p << endl;//12
    
    //*p = 9;//报错：表达式必须是可修改的左值
    cout <<"NNN"<< *p << endl;
    /**************************************/
    int c = 99;
    int const * p1 = &c;
    cout << *p1 << endl;//99

    int d = 108;
    p1 = &d;
    cout<< *p1 << endl;//108

    d = 30;
    cout<< *p1 << endl; 

    //*p1 = 100;报错：表达式必须是可修改的左值
    cout << *p1 << endl;
}