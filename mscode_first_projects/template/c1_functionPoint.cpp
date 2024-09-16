#include<iostream>
using namespace std;

//函数指针

int max(int x,int y)
{
    if( x > y){
        return x;
    }
    return y;
}

int main()
{

    int c = max(5,9);
    cout << c << endl;

    int (*p)(int x,int y);//定义一个函数指针变量
    p = max;
    int d = (*p)(5,19);
    cout << d << endl;

    int e = p(21,34);
    cout << e << endl;

}