#include<iostream>
using namespace std;

class A
{
public:
    //int m_i;
    A()
    {
        cout << "类A的构造函数执行了"<< endl;
    }

    ~A()
    {
        cout << "类A的析构函数执行了"<< endl;
    }

    //operator new 重载
    static void* operator new(size_t size)
    {
        cout << "A::operator new 被调用了"<< endl;
        A* ppoint = (A*)malloc(size);
        return ppoint;
    }

    //operator delete 重载
    static void operator delete(void* phead)
    {
        cout <<"A::operator delete被调用了"<< endl;
        free(phead);
    }

    //operator new[] 重载
    static void* operator new[](size_t size)
    {
        cout << ""<< endl;
        A* ppoint = (A*)malloc(size);
        return ppoint;
    }

    //operator delete[] 重载
    static void operator delete[](void* phead)
    {
        cout << "A::operator delete[]被调用了"<< endl;
        free(phead);
    }

};



int main()
{
    A* pa = new A();
    delete pa;
    cout << "-------------------------"<< endl;

    //不想用重载的new/delete时
    A* pa2 = ::new A();
    ::delete pa2;
   
    cout << "--------------------------"<< endl;

    A* pa3 = new A[3]();
    delete[] pa3;





}