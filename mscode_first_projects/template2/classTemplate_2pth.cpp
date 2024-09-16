#include<iostream>
#include "classTemplate_2pth.h"
using namespace std;

int main()
{
    TCP<double,int,double> tcpdi;
    tcpdi.functest();

    TCP<int,int,double> tcpii;
    tcpii.functest();
}