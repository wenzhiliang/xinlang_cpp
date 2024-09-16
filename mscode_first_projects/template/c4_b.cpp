#include<iostream>
using namespace std;
/**
 * 函数模板趣味用法举例
 * 
 * 同一个函数模板，根据传递进去的不同参数，可以推断出不同的类型。
 * 1 推断出时一个函数指针
 * 2 推断出是一个可调用对象 
 *   该可调用对象被重载的()里面的参数和返回值类型必须与函数模板里面进行可调用对象调用时所需的参数类型和返回值类型匹配
 * 
 */
template<typename T,typename F>
void testfunc(const T& i,const T& j,F funcpoint){
    int result = funcpoint(i,j);
    cout << result << endl;
}

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

int main(){
    tc tcobj;
    testfunc(3,4,tcobj);

    testfunc(3,4,tc() );

}



