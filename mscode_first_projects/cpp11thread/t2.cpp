#include<iostream>
#include<thread>
using namespace std;

//可调用对象
class TA
{
public:
    void operator()()
    {
        cout << "TA::operator()开始执行了"<< endl;
        cout << "TA::operator()执行结束了"<< endl;
    }
};



int main()
{
    TA ta;
    thread myobj3(ta);
    myobj3.detach();

    cout << "main主函数执行结束"<< endl;

}