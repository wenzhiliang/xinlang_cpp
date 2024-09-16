#include<iostream>
using namespace std;

/**
 * 产生临时对象的情况和解决方案
 * 隐式类型转换以保证函数调用成功 
 * C++语言只会为const引用产生临时对象
 */

//此处必须为const引用
int calc(const string& strsource,char ch)
{
    const char* p = strsource.c_str();
    int icount = 0;
    //具体的业务代码
    return icount;
}

int calc(string& strsource,char ch)
{
    const char* p = strsource.c_str();
    int icount = 0;
    //具体的业务代码
    return icount;
}


int main()
{
    char mystr[100] = "I Love China,oh,yeah!";

    //用mystr作为参数，调用string的构造函数  产生临时对象
    int result = calc(mystr,'o');

    string mystr1 = "I Love China";
    int res = calc(mystr1,'o');

    const string mystr2 = "I Love China,oh,yeah!";
    int re = calc(mystr2,'o');

}