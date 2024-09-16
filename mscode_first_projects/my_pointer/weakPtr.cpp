#include<iostream>
#include<memory>

using namespace std;

int main()
{

    auto pi = make_shared<int>(100);

    //1
    weak_ptr<int> piw(pi);

    //2
    // weak_ptr<int> piw;
    // piw = pi;

    weak_ptr<int> piw2;
    piw2 = piw;

    //lock检查weak_ptr所指向的对象是否还存在
    auto pi2 = piw.lock();
    if( pi2 != nullptr ){
        cout << "所指对象存在"<< endl;
    }

    {//use_count member function
        auto pi = make_shared<int>(100);
        weak_ptr<int> piw(pi);
        pi.reset();
        auto pi2 = piw.lock();
        if( pi2 == nullptr){
            cout << "所指对象不存在";
        }
    }

    {//expired member function
        auto pi = make_shared<int>(100);
        auto pi2(pi);
        weak_ptr<int> piw(pi);
        cout << piw.use_count();


        pi.reset();
        pi2.reset();
        if( piw.expired() ){
            cout << "piw 已过期"<< endl;
        }
    }

    {//reset member function
        cout << "reset member function";
        auto pi = make_shared<int>(100);
        weak_ptr<int> piw(pi);
        piw.reset();
        cout << pi.use_count() << endl;
    }

    {//lock member function
        auto p1 = make_shared<int>(42);
        weak_ptr<int> pw;
        pw = p1;

        if( !pw.expired() ){
            auto p2 = pw.lock();
            if( p2 != nullptr ){
                cout << "所指对象存在" << endl;
            }

        }else{
            cout << "pw已经过期"<< endl;
        }
    }

    weak_ptr<int> pw;
    {
        auto p1 = make_shared<int>(42);
        pw = p1;
    }
    if( pw.expired() ){
        cout << "pw 已经过期"<< endl;
    }

    
    {//尺寸问题
        shared_ptr<int> p1(new int(100));
        weak_ptr<int> pw(p1);
        cout << sizeof(p1);
        cout << sizeof(pw);

        //weak_ptr或shared_ptr的尺寸都是8字节，这8个字节都包含了两个裸指针
    }

}