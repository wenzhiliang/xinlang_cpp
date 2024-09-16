#include<iostream>

using namespace std;


int mf(int tmp1,int tmp2){
    //
    return 1;
}

//定义一个函数指针类型
typedef int(* FunType)(int,int);

//函数指针作为其他函数的参数
void testfunc(int i,int j,FunType funcpoint){
    int result = funcpoint(i,j);
    cout << result << endl;
}

int main()
{
    //函数指针作为其他函数的参数
    testfunc(3,4,mf);
}