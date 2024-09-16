#include<iostream>
using namespace std;

/**
 * 产生临时对象的情况和解决方案
 * 类型转换生成的临时对象
 */

class CTempValue
{
public:
    int val1;
    int val2;
public:
    CTempValue(int v1 = 0,int v2 = 0):val1(v1),val2(v2)
    {
        cout << "调用了构造函数"<< endl;
        cout << "val1 = "<< val1 <<endl;
        cout << "val2 = "<< val2 <<endl;
    }

    CTempValue(const CTempValue& t):val1(t.val1),val2(t.val2)
    {
        cout << "调用了拷贝构造函数"<< endl;
    }

    virtual ~CTempValue()
    {
        cout << "调用了析构函数"<< endl;
    }

    CTempValue& operator=(const CTempValue& tmpv)
    {
        //不能用初始化列表，只有构造函数才有初始化列表
        val1 = tmpv.val1;
        val2 = tmpv.val2;
        cout << "调用了拷贝赋值运算符"<< endl;
        return *this;
    }

    int Add(CTempValue tobj)
    {
        int tmp = tobj.val1 + tobj.val2;
        tobj.val1 = 100;
        return tmp;
    }

    
};

CTempValue myDouble(CTempValue& ts)
    {
        // CTempValue tmpm;
        // tmpm.val1 = ts.val1 * 2;
        // tmpm.val2 = ts.val2 * 2;
        //cout << "函数内部对象地址:"<< &tmpm << endl;

        //return tmpm;
        return CTempValue(ts.val1*2, ts.val2*2);
    }


int main()
{
    // CTempValue tm(10,20);
    // int Sum = tm.Add(tm);

    // cout << "Sum = "<< Sum << endl;
    // cout << "tm.val1 = "<< tm.val1 << endl;

    //生成临时对象 调用拷贝赋值运算符
    // CTempValue sum;
    // sum = 1000;

    //这里的= 不是赋值运算符，而是定义时初始化
    //CTempValue s = 100;

    //和新经典上不一样
    CTempValue ts1(10,20);
    CTempValue&& ts3 = myDouble(ts1);
    cout << "ts3 address is:"<< &ts3 << endl;
}