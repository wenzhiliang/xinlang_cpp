#include<iostream>
#include "classTemplate_1qth.h"
using namespace std;
/**
 * 类模板全特化
 */
int main()
{
    TC<char,int> tcchar;
    tcchar.functest();

    TC<int,int> tcint;
    tcint.functest();

    TC<double,int> tcdouble;
    tcdouble.functest();

    TC<double,double> tdbldbl;
    tdbldbl.functest();
}