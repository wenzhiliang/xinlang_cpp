#include<iostream>

using namespace std;
//指针常量：p不可以再指向其他内容
int main()
{
    int a = 49;
    int * const p = &a;
    cout << *p << endl;//49

    *p = 59;
    cout << *p << endl;//59
    cout << a << endl;//59

    int b = 51;
    //p = &b;//报错：表达式必须是可修改的左值
    cout << *p << endl; 
    cout << "*******************************"<<endl;

    char c = 'm';
    const char * const pc = &c;
    cout << *pc << endl;//m

    //*pc = 'f';//报错：表达式必须是可修改的左值
    cout << *pc << endl;

    char cc = 'k';
    //pc = &cc;//报错：表达式必须是可修改的左值
    cout << *pc << endl;
    cout << "*******************************"<<endl;



    int i = 89;
    int const * const pi = &i;
    cout << *pi << endl;//89

    //*pi = 100;报错：表达式必须是可修改的左值
    cout << *pi << endl;

    int k = 103;
    //pi = &k;报错：表达式必须是可修改的左值
    cout << *pi << endl;



}