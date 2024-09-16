#include<iostream>
#include<memory>

using namespace std;

class A
{
public:
    A(){
        cout << "构造函数" << endl;
    }
    ~A(){
        cout << "析构函数" << endl;
    }
};

int main()
{


    {
        A* paaa = new A();
        delete paaa;

    }


    int* pi = new int;
    delete pi;

    void* myorgpoint = operator new(100);
    cout << myorgpoint << endl;




}