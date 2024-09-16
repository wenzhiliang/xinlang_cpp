#include<iostream>
#include<cstring>
using namespace std;

/**
 * 函数模板
 * template<模板参数列表> <>里面至少要一个模板参数
 * 使用时，有时需要指定模板实参，有时不需要指定模板实参
 * 
 */

//类型模板参数
template<typename T>
T funcadd(T a,T b){
    T addhe = a +   b;
    return addhe;
}

//非类型模板参数
template<int a,int b>
int funcaddv2(){
    int addhe = a+ b;
    return addhe;
}

//类型模板参数+非类型模板参数
template<typename T,int a,int b>
int funcaddv3(T c){
    int addhe = (int)c + a + b;
    return addhe;
}

template<unsigned L1,unsigned L2>
inline int charscomp(char const (&p1)[L1] , char const (&p2)[L2]){
    return strcmp(p1,p2);
}

int main()
{
    {//类型模板参数
        int he = funcadd(3,1);
        float h = funcadd(3.1f,1.2f);
        //float h1 = funcadd(3 , 1.2f);没有与参数列表匹配的函数模板 "funcadd" 实例 -- 参数类型为:  (int, float)
    }

    {//非类型模板参数 用户提供
        int result = funcaddv2<12,13>();
        cout << result << endl;//25

        //非类型模板参数必须是常量表达式 
        //值必须是在编译的时候就能确定的，因为实例化模板是在编译时进行的
        int a = 12;
        //int re = funcaddv2<a,14>();
    }
    
    {//类型模板参数+非类型模板参数
        int result = funcaddv3<int,11,12>(13);//类型一致时
        cout << result << endl;//36

        result = funcaddv3<double,11,12>(13);//类型不一致时，会以<>传递进去的类型为准
        cout << result << endl;//36
    }

    {//非类型模板参数 编译器推断
        int result = charscomp("test2","test");
        cout << result << endl;
    }

}
