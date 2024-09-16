#include<iostream>
using namespace std;
/**
 * 默认模板参数
 * 1 为类模板提供默认模板参数
 * 2 为函数模板提供默认模板参数
 */

class tc
{
public:
    tc(){
        cout << "构造函数执行" << endl;
    }
    tc(const tc& t){
        cout << "拷贝构造函数执行" << endl;
    }
    int operator()(int v1,int v2) const{
        return v1 + v2;
    }
};

int mf(int tmp1,int tmp2){
    //
    return 1;
}




template<typename T,typename F = tc>
void testfunc(const T& i , const T& j, F funcpoint = F() ){
    cout << funcpoint(i,j) << endl;
}



int main(){
    testfunc(3,4);

    //一旦提供了参数，默认参数就不起作用了
    testfunc(3,4, mf);
}
