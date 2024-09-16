#include<iostream>
using namespace std;

int mf(int tmp1,int tmp2){
    //
    return 1;
}

template<typename T,typename F>
void testfunc(const T& i,const T& j,F funcpoint){
    int result = funcpoint(i,j);
    cout << result << endl;
}

int main()
{
    //函数指针作为其他函数的参数
    testfunc(3,4,mf);
}