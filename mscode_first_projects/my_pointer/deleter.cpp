#include<iostream>
#include<memory>
#include<vector>
using namespace std;
//如何测试有没有内存泄漏？

void myDeleter(int* p)
{
    delete p;
}

//定义一个函数模板
template<typename T>
shared_ptr<T> make_shared_array(size_t size)
{
    return shared_ptr<T>(new T[size], default_delete<T[]>() );
}

/**
 * 删除器 可以是函数，也可以是lambda表达式
 * 管理数组时要指定自己的删除器
 *  
 */

class A
{
public:
    A(){
        cout << "A() is called." << endl;
    }
    ~A(){
        cout << "~A() is called." << endl;
    }
};

int main()
{
    {//函数作为删除器
        shared_ptr<int> p(new int(12345) , myDeleter);
        shared_ptr<int> p2(p);
        p2.reset();
        p.reset();
    }

    {//lambda表达式作为删除器
        shared_ptr<int> p3(new int(123), [](int* p){
            delete p;
        });
        p3.reset();
    }
    
    //默认的删除器不支持数组对象
    shared_ptr<int[]> p4(new int[10], [](int* p){
        delete[] p;
    });
    p4.reset();


    shared_ptr<A> pA(new A() );
    pA.reset();

    {
        cout << "测试自定义对象"<< endl;
        //shared_ptr<A> pA1(new A[10]);//异常
        shared_ptr<A> pA1(new A[10], [](A* p){
            delete[] p;
        });
        //或
        //default_delete 时标准库里面的一个类模板
        shared_ptr<A> pA2( new A[10], std::default_delete<A[]>() );
    }

    {
        //像下面这样，不需要删除器也能正常释放内存
        shared_ptr<A[]> pA( new A[10] );
        shared_ptr<int[]> p( new int[10] );
        cout << p[0] << endl;
        cout << p[9] << endl;
    }


    {
        shared_ptr<int> pintArr = make_shared_array<int>(5);
        shared_ptr<A> pAArr = make_shared_array<A>(15);
    } 

    {
        //指定删除器的额外说明
        //就算两个shared_ptr指定的删除器不相同，
        //只要它们所指向的对象相同，那么这两个shared_ptr也属于同一个类型。
        auto lambda1 = [](int* p){
            cout << "lambda1 is called" << endl;
            delete p;
        };
        auto lambda2 = [](int* p){
            cout << "lambda2 is called" << endl;
            delete p;
        };
        shared_ptr<int> p1(new int(100), lambda1 );
        shared_ptr<int> p2(new int(200), lambda2 );

        p2 = p1;
        vector< shared_ptr<int> > pvec{p1, p2};
    }
}