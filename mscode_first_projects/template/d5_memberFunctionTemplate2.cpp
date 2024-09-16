#include<iostream>
using namespace std;
/**
 * 成员函数模板 
 */

/**
 * 类模板的成员函数模板
 * 类模板的模板参数和成员函数模板的模板参数互不干扰
 */

template<typename C>
class A
{
public:
    //构造函数引入自己的模板参数
    template<typename T2>
    A(T2 v1, T2 v2)
    {
    }

    template<typename T>
    void myft(T tmpt)
    {
        cout << tmpt << endl;
    }
    C m_ic;
};


//类内声明一个函数，内外实现
template<typename CC>
class AA
{
public:
    //声明
    template<typename TT>
    AA(TT v1, TT v2);
   

    template<typename T>
    void myft(T tmpt)
    {
        cout << tmpt << endl;
    }
    CC m_ic;
};

//实现
template<typename CC>
template<typename TT>
AA<CC>::AA(TT v1,TT v2)
{
    cout << v1 << "----"<< v2 << endl;
};

int main()
{
    //类模板的模板参数必须用<>指定，函数模板的模板参数可以推断
    A<float> a(1,2);
    A<float> a2(1.1, 2.2);
    a.myft(3);


    AA<float> aa(1,2);
    AA<float> aa2(1.1f, 2.2f);
}