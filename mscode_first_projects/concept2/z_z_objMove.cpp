#include<iostream>
using namespace std;

class B
{
public:
    B():m_bm(100)
    {
        //cout << "类B的构造函数执行了"<< endl;
    }
    B(const B& tmp)
    {
        m_bm = tmp.m_bm;
        cout << "类B的拷贝构造函数执行了"<< endl;
    }
    virtual ~B()
    {
        //cout << "类B的析构函数执行了"<< endl;
    }
    int m_bm;
};

class A
{
public:
    A():m_pb(new B())
    {
        cout << "类A的构造函数执行了,为 "<<this<< endl;
    }

    A(const A& tmpa):m_pb( new B(*(tmpa.m_pb)) )
    {
        cout << "类A的拷贝构造函数执行了"<< endl;
    }

    // A(A&& tmpa):m_pb(tmpa.m_pb)
    // {
    //     tmpa.m_pb = nullptr;
    //     cout << "类A的移动构造函数执行了,生成的新对象为 "<< this<< endl;
    // }



    ~A()
    {
        delete m_pb;
        cout <<this<< "  类A的析构函数执行了"<< endl;
    }

private:
    B* m_pb;    
};


A getA()
{
    A a;
    cout << "local a address is:"<< &a << endl;
    return a;
}


int main()
{

    //要执行一次 拷贝构造函数或移动构造函数
    // getA();


    //要执行一次 拷贝构造函数或移动构造函数
    A&& a1 = getA();

    //要执行两次 拷贝构造函数或移动构造函数
    //  A a = getA();
    //  cout << "a address is:"<< &a << endl;


    //A a1(std::move(a));


}