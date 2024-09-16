#include<iostream>
using namespace std;

class A
{

};
class B:public A
{

};

/**
 * 类型转换：隐式类型转换、显示类型转换
 * 
 * 
 * 显示类型转换:
 *      C风格 ()
 *      C++风格 
 *          static_cast  编译时进行
 *          dynamic_cast
 *          const_cast
 *          reinterpret_cast           
 * 
 */
int main()
{
    {
        //3先转换为double类型,结果为double类型,然后转换为int类型
        int m = 3 + 45.6;

        //3转换为double类型
        double n = 3+ 45.6;
    }
    
    {
        int i = int(1.68f);
        cout << i << endl;

        int i1 = (int)3.6415;
        cout << i1 << endl;
    }

    {//static_cast
        //平行类型转换 如整型和实型之间的转换
        float f = 3.1415;
        cout << f << endl;

        int i3 = (int)f;
        int i4 = static_cast<int>(f);

        //子类转成父类
        B b;
        A a = static_cast<A>(b);

        //void*与其他类型之间的转换
        int i = 10;
        int* p = &i;
        void* q = static_cast<void*>(p);
        int* db = static_cast<int*>(q);
    }

    {//dynamic_cast

    }

    {//const_cast 去除指针或引用的const属性
        const int ai = 90;
        const int* pai = &ai;
        int* pai2 = const_cast<int*>(pai);

        *pai2 = 120;
        cout << ai << endl;
        cout << *pai;
        cout << "---------------------------" << endl;
    }

    {//C风格去掉const属性
        const int ai = 90;
        int* pai = (int*)&ai;
        *pai = 150;
        cout << ai << endl;
        cout << *pai << endl;
        cout << "---------------------------" << endl;
    }
    
    {//reinterpret_cast
        int i = 10;
        int* pi = &i;
        int* p2 = reinterpret_cast<int*>(&i);
        char* pc = reinterpret_cast<char*>(pi);
        cout << *p2 << endl;
        cout << *pc << endl;
        cout << "---------------------------" << endl;
    }




}