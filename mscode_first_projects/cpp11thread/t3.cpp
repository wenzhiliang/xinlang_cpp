#include<iostream>
#include<thread>
using namespace std;

class TA
{
public:
    TA(int& i):m_i(i){
        cout << "TA()构造函数执行  "<< m_i<<"  "<< this << endl;
    }
    ~TA(){
        cout << "TA()析构函数执行  "<< m_i<<"  "<< this << endl;
    }
    TA(const TA& ta):m_i(ta.m_i){
        cout << "TA()拷贝构造函数执行  "<< m_i<<"  "<< this << endl;
    }
    void operator()()
    {
        cout << "mi1的值为:"<<m_i << endl;
        cout << "mi2的值为:"<<m_i << endl;
        cout << "mi3的值为:"<<m_i << endl;
        cout << "mi4的值为:"<<m_i << endl;
        cout << "mi5的值为:"<<m_i << endl;
        cout << "mi6的值为:"<<m_i << endl;
        cout << "mi7的值为:"<<m_i << endl;
    }
    int& m_i;
};


int main()
{

    int myi = 6;
    TA ta(myi);

    thread mytobj3(ta);
    mytobj3.join();
    cout << "main主函数执行结束"<< endl;
}

