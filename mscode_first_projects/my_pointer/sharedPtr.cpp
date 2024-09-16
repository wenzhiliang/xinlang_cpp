#include<iostream>
#include<string>
//#include "string.h"
#include<memory>

using namespace std;

// shared_ptr<int> makes(int value)
// {
//     return new int(value);
// }

shared_ptr<int> makes(int value)
{
    return shared_ptr<int>( new int(value) );
}

//进入函数内部后引用计数加1，退出后减1
void myfunc(shared_ptr<int> ptmp) {
    cout << "进入函数内部时，引用计数："<< ptmp.use_count()<< endl;
    return;
}

shared_ptr<int> myfunc2(shared_ptr<int>& ptmp) {
    return ptmp;
}

int main()
{
    shared_ptr<string> p1;
    cout <<"p1_address:"<<  p1 << endl;
    //cout << *p1 << endl;

    shared_ptr<int> pi1(new int(100));
    cout << "pi1 address:"<< pi1 <<"-----------"<< *pi1<< endl;

    //shared_ptr<int> pi2 = new int(100);

    int* pi3 = new int(56);
    shared_ptr<int> pi4(pi3);
    cout << "pi3 address:"<< pi3 <<"-----------"<< *pi3<< endl;
    cout << "pi4 address:"<< pi4 <<"-----------"<< *pi4<< endl;

    {
    shared_ptr<int> sp2 = std::make_shared<int>(100);

    shared_ptr<string> p3 = std::make_shared<string>(5,'a');

    shared_ptr<int> p4 = make_shared<int>();

    p4 = make_shared<int>(400);

    auto p5 = make_shared<string>(5,'a');
    }

    auto p6 = std::make_shared<int>(100);
    auto p7(p6);
    cout << "p6.use_count():"<< p6.use_count() << endl;
    cout << "p7.use_count():"<< p7.use_count() << endl;

    myfunc(p7);
    cout << "p6.use_count():"<< p6.use_count() << endl;
    cout << "p7.use_count():"<< p7.use_count() << endl;

    //有变量接受返回值，引用计数加1
    auto p8 = myfunc2(p7);
    cout << p6.use_count() << endl;
    cout << p7.use_count() << endl;

    //没变量接受返回值，引用计数不变
    myfunc2(p7);
    cout << "p6 use_count:" << p6.use_count() << endl;
    cout << "p7 use_count:" << p7.use_count() << endl;

    p8 = std::make_shared<int>(200);
    cout << p6.use_count() << endl;

    p7 = std::make_shared<int>(200);
    cout << p6.use_count() << endl;

    p6 = std::make_shared<int>(200);

    {
        shared_ptr<int> myp(new int(100) );
        if( myp.unique() ){
            cout << "myp unique ok";
        }
        shared_ptr<int> myp2(myp);
        if( myp.unique() ){
            cout << "kkkkkkk";
        }
    }

    {
        shared_ptr<int> pi0( new int(100) );
        pi0.reset();
        if( pi0 == nullptr ){
            cout << "pi0 被置空" << endl;
        }

        shared_ptr<int> pi(new int(100) );
        auto pi2(pi);
        cout << pi2.use_count() << endl;
        pi.reset();
        cout << pi2.use_count() << endl;
    }
    {
        shared_ptr<int> p(new int(100) );
        p.reset(new int(1) );

        shared_ptr<int> pi(new int(100));
        auto pi2(pi);
        pi.reset(new int(1));
        if( pi.unique() ){
            cout << "pi unique ok"<< endl;
        }
        if( pi2.unique() ){
            cout << "pi2 unique ok"<< endl;
        }

        shared_ptr<int> pn;
        pn.reset(new int(100));
    }

    {//get member function
        shared_ptr<int> myp(new int(100));
        int* p = myp.get();
        *p = 45;
    }

    {
        cout << "swap member function" << endl;
        shared_ptr<string> ps1(new string("I love China1!") );
        shared_ptr<string> ps2(new string("I love China2!") );
        std::swap(ps1,ps2);
        ps1.swap(ps2);
    }

    {
        shared_ptr<string> ps1(new string("I love China!!!") );
        ps1 = nullptr;
        cout << ps1.use_count() << endl;//0
    }

    {
        cout << "智能指针名字作为判断条件"<< endl;
        shared_ptr<string> p(new string("hello world!") );
        if( p ){
            cout << "p"<< endl;
        }
    }


}