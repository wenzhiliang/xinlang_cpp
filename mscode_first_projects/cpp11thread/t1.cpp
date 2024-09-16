#include<iostream>
#include "stdio.h"
#include<thread>

using namespace std;

void myprint()
{
    std::cout<<"我的线程执行完毕了！1"<<std::endl;
    std::cout<<"我的线程执行完毕了！2"<<std::endl;
    std::cout<<"我的线程执行完毕了！3"<<std::endl;
    std::cout<<"我的线程执行完毕了！4"<<std::endl;
    std::cout<<"我的线程执行完毕了！5"<<std::endl;
    std::cout<<"我的线程执行完毕了！6"<<std::endl;
    std::cout<<"我的线程执行完毕了！7"<<std::endl;
    std::cout<<"我的线程执行完毕了！8"<<std::endl;
    return ;
}
/*
对于一个线程，join(),detach()只能调用其中的一个
joinable()判断是否可以调用join()或detach(),
返回true时可以调用，返回false时不可以调用
*/

int main()
{
    std::cout << "I Love China!" << std::endl;
    std::cout << std::this_thread::get_id()<< std::endl;

    std::thread mytobj(myprint);
    cout <<"joinable():"<< mytobj.joinable() << endl;

    //mytobj.join();//等待子线程执行完毕
    mytobj.detach();//线程分离

    std::cout<<"主线程执行结束！"<< std::endl;
    return 0;
}