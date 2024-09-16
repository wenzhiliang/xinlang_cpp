#include<iostream>
#include "classTemplate_2pth2.h"
using namespace std;

int main()
{
    TCF<double> td;
    td.functest();

    TCF<double*> tcfd;
    tcfd.functest();

    TCF<const int> tcfi;
    tcfi.functest();

    TCF<int&> tcfyi;
    tcfyi.functest();

    TCF<int&&> tcfyii;
    tcfyii.functest();

}