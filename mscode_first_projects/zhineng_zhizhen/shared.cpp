#include<iostream>
#include<memory>//不加会出现此错误'shared_ptr' was not declared in this scope

using namespace std;
shared_ptr<int> makes(int value){
    //return new int(value);不存在从 "int *" 转换到 "std::shared_ptr<int>" 的适当构造函数
    return nullptr;
}

shared_ptr<int> make(int value){
    return shared_ptr<int>( new int(value) );
}

void myfunc(shared_ptr<int> ptmp){
    return;
}

shared_ptr<int> myfunc2(shared_ptr<int> & ptmp){
    return ptmp;
}


//shared_ptr共享式指针 最后一个指向该对象的shared_ptr不需要再指向该对象时，这个shared_ptr才会去析构所指向的对象
int main()
{
    std::shared_ptr<int> pi( new int(100) );
    //shared_ptr<int> pi2 = new int(100);不存在从 "int *" 转换到 "std::shared_ptr<int>" 的适当构造函数

    //尽量不要使用裸指针
    int* pi3 = new int;
    shared_ptr<int> pl(pi3);
    shared_ptr<int> pl1(new int);


    shared_ptr<int> p2 = make_shared<int>(100); 
    shared_ptr<string> p3 = make_shared<string>(5,'a');
    shared_ptr<int> p4 = make_shared<int>();
    p4 = make_shared<int>(400);
    auto p5 = make_shared<string>(5,'a');

    /*****************************引用计数的增加与减少**************************************/
    auto p6 = make_shared<int>(100);
    auto p7(p6);
    myfunc(p7);//进入myfunc中时有3个引用，从myfunc中返回时引用计数恢复为2
    auto p8 = myfunc2(p7);
    cout << "nihao\n";

    p8 = make_shared<int>(200);
    p7 = make_shared<int>(200);
    p6 = make_shared<int>(200);

    auto p9 = make_shared<int>(100);
    auto p10 = make_shared<int>(100);
    p9 = p10;



}

