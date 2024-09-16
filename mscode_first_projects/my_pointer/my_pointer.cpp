#include <iostream>
using namespace std;

//指针数组：存放指针的数组
void pointer_array(void) 
{
    int a = 11;
    int b = 13;
    int c = 17;
    int d = 19;
    int* p[4] = { &a,&b,&c,&d };
    std::cout << *p[2] << std::endl;
}


//数组指针
//a代表数组首元素地址，&a代表数组地址
void array_pointer() {

    int(*p)[10];
    int a[10] = {0,1,2,3,4,5,6,7,8,9};

    p = &a;

    cout << p << std::endl;
    cout << *p << std::endl;
    cout << a << std::endl;
    cout << &a << std::endl;//该4个都输出地址，而且地址一样

    cout << sizeof(a) << endl;//40
    cout << sizeof(*p) << endl;//40
    cout << sizeof(p) << endl;//8

    cout << sizeof(int*) << endl;//8

}


int main()
{
    std::cout << "Hello World!\n";
    //pointer_array();
    array_pointer();
    return 0;
}
