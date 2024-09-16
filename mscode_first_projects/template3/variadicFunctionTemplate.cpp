#include<iostream>
using namespace std;


template<typename... T>
void myfunct1(T...args)
{
    cout << sizeof...(args) << endl;
    cout << sizeof...(T) << endl;
}


void myfunct2()
{
    cout << "参数包展开时执行了递归终止函数myfunc2()"<< endl;
}

template<typename T,typename...U>
void myfunct2(const T& firstarg, const U&...otherargs)
{
    cout << sizeof...(otherargs)<< endl;
    cout << "收到的参数值为:"<< firstarg << endl;
    myfunct2(otherargs...);
}


int main()
{

    myfunct1();
    myfunct1(10,20);

    myfunct1(10,25.8,"abc",68);

    cout << "---------------------------"<< endl;
    //myfunct2(10);
    myfunct2(10,"abc",12.7);

}