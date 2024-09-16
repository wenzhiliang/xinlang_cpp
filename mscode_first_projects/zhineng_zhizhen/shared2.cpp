#include<iostream>
#include<memory>
using namespace std;

int main()
{
    // *
    shared_ptr<int> pother(new int(12345) );
    cout << *pother << endl;
    cout << pother << endl;

    //get
    shared_ptr<int> myp(new int(100) );
    int* p = myp.get();    //引入此函数是因为有些函数的参数需要的是一个裸指针
    cout << *p << endl;
    *p = 45;
    cout << *p << endl;

    //swap
    shared_ptr<string> ps1( new string("I love China!") );
    shared_ptr<string> ps2( new string("I love China too!"));
    std::swap(ps1,ps2);
    cout << *ps1 << endl;
    ps1.swap(ps2);
    cout << *ps1 << endl;

    // =nullptr
    shared_ptr<string> ps(new string("I love China!") );
    ps = nullptr;

    //智能指针名字作为判断条件
    shared_ptr<string> pp(new string("I love China!") );
    if( pp ){
        cout << pp << endl;
    }


}