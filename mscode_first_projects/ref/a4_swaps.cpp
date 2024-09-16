#include <iostream>

using namespace std;

void swapr(int & a,int & b);
void swapp(int* p, int* q);
void swapv(int a, int b);
//函数调用使用实参初始化形参。
/*
指针和引用在函数传参时的区别：
1，声明函数形参的方式不同，一个用*，一个用&
2，指针版本在使用参数时要用解除引用运算符*
*/

int main()
{
    cout << "Hello World!\n";
    int wallet1 = 10;
    int wallet2 = 15;
    cout <<"wallet1="<< wallet1 << "  wallet2=" << wallet2 << endl;

    cout << "Using references to swap contents:\n";
    swapr(wallet1, wallet2);
    cout <<"wallet1="<< wallet1 << "  wallet2=" << wallet2 << endl;


    swapp(&wallet1, &wallet2);
    cout <<"wallet1="<< wallet1 << "  wallet2=" << wallet2 << endl;

    //引用形参被初始化为函数调用时传递的实参。
    swapv(wallet1, wallet2);//i和j是复制了wallet1和wallet2的新变量，i和j的改变不会影响wallet1和wallet2
    cout <<"wallet1="<< wallet1 << "  wallet2=" << wallet2 << endl;
    return 0;
}
void swapr(int & i,int & j) {
    int tmp;
    tmp = i;
    i = j;
    j = tmp;
}

void swapp(int* i, int* j) {
    int tmp;
    tmp = *i;
    *i = *j;
    *j = tmp;
}

void swapv(int i,int j) {
    int tmp;
    tmp = i;
    i = j;
    j = tmp;
}





