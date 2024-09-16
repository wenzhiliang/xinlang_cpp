#include<iostream>
using namespace std;
/**
 * 类型转换构造函数 类型转换运算符
 * static_cast
 * 类对象转换为函数指针
 */

class TestInt
{
public:
    //加上explicit后，则就禁止隐式调用
    TestInt(int x = 0):m_i(x)
    {
        cout << "类型转换构造函数"<< endl;
        if(m_i < 0){
            m_i = 0;
        }
        if(m_i > 100){
            m_i = 100;
        }
    }

    //加上explicit后，则就禁止隐式调用
    explicit operator int() const
    {
        return m_i;
    }

public:
    int m_i;


public:
    typedef void(*tfpoint)(int);
    //或
    //using tfpoint = void(*)(int);

    static void mysfunc(int v1)
    {
        int test = 1;
        cout << "静态成员函数"<< endl;
    }

    operator tfpoint()
    {
        //那就必须要返回一个函数指针了
        return mysfunc;
    }

};


int main()
{
    //隐式调用类型转换构造函数
    TestInt ti = 12;

    //显示调用类型转换构造函数
    TestInt ti2(22);

    ti2 = 6;

    //不常用  通过定义类成员函数来解决实际问题感觉比使用类型转换运算符要更好一些
    //隐式调用
    //int k = ti2 + 5;
    //显示调用
    int k2 = ti2.operator int() +5;

    int k3 = static_cast<int>(ti2) + 5;
    cout << k3 << endl;

    {
        TestInt myi(12);
        myi(123);
        //或
        myi.operator TestInt::tfpoint()(456);
    }

    //类型转换容易出现二义性问题 这也是类型转换建议少用的一个原因

    

}