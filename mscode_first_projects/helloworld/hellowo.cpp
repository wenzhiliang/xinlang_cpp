#include <iostream>
#include <vector>
#include <string>
#include "string.h"





using namespace std;
//访问数组元素采用两种方法：1下标法；2指针法
int main()
{
    cout << sizeof(int);//4

    int a[4] = {90,17,23,31};
    cout << a[0] << endl;
    cout << *a << endl;
    cout << *(a+1) << endl;
    cout << *(a+2) << endl;
    cout << *(a+3) << endl;
    

    int aa[3][4] = {  {1,2,3,4} 
                    , {5,6,7,8} 
                    , {9,10,11,12} };

    cout << aa[0] << endl;//0x61fde0
    cout << aa[0]+1 << endl;//0x61fde4
    cout << aa[1] << endl;//0x61fdf0
    cout << aa[2] << endl;//0x61fe00

    cout << sizeof(aa) << endl;//48
    
}