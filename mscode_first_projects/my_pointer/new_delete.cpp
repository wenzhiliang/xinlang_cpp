#include<iostream>
#include<memory>
#include<vector>

using namespace std;

class A
{
public:
    A(){
        cout << "调用A的构造函数"<< endl;
    }
    int m_i;
};

/**
 *  动态分配内存 调用new来创建对象
 * 
 * 
 */

int main()
{
    {//不给初值时
        //new 内置类型
        int* pointi = new int;//

        //new 类的实例
        string* mystr = new string;//""
    }

    {//
        int* pointi = new int(100);
        string* mystr2 = new string(5,'a');
        vector<int>* pointv = new vector<int>{1,2,3,4,5};
    }

    {//值初始化
        string* mystr2 = new string();//""
        int* pointi3 = new int();//0
    }

    {
        string* mystr2 = new string(5,'a');

        //mystr3会被推断成string**类型
        auto mystr3 = new auto(mystr2);
        delete mystr2;
        delete mystr3;
    }

    {
        const int* pointci = new const int(200);

        //不合法
        //*pointci = 300;
    }

    {//给delete传递一个空指针，确实可以delete多次,但是没有意义
        char* p = nullptr;
        delete p;
        delete p;
    }

    {//不是new出来的不能delete
        int i;
        int* p = &i;
        //delete p;//Exception has occurred
    }

    {
        int* p = new int();
        int* p2 = p;
        delete p2;
        /**
         * p、p2指向同一块内存，该内存已通过p2释放了
         * 所以两个指针指向同一块内存的情形比较麻烦
         */
        //delete p;//Exception has occurred
    }

    {//书上说有异常，但此处测试没有
        int* pci = new int(300);
        delete pci;
        *pci = 900;
        cout << *pci << endl;
    }

    {//模糊点
        A a;
        //A* pa1 = new A;
        A* pa22222 = new A();
    }

    


    
}