#include<iostream>
using namespace std;
/**
 * 默认模板参数为一个函数指针
 */

int mf(int tmp1,int tmp2){
    return 1;
}

typedef int(* FunType)(int,int);

//必须为模板参数和函数形参指定默认值
template<typename T,typename F = FunType>
void testfunc1(const T& i,const T& j,F funcpoint = mf){
    cout << funcpoint(i,j) << endl;
    cout << "hhhhhhhhhhhhhhhh" << endl;
}


int main()
{
    testfunc1(3,4);
}