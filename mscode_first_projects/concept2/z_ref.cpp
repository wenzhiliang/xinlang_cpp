#include<iostream>
using namespace std;

int main()
{
    int value = 10;
    int& refval = value;
    cout << value <<" "<< refval << endl;
    
    refval = 13;
    cout << value <<" "<< refval << endl;
    value = 14;
    cout << value <<" "<< refval << endl;


    //const引用
    const int& refval2 = value;
    //refval2 = 18;表达式必须是可修改的左值


    //右值引用
    int&& refrightvalue = 3;
    refrightvalue = 5;


    //右值引用赋给左值引用
    refval = refrightvalue;
    cout << refval << endl;



    string&& str = "I Love China";
    cout << str << endl;


    int i = 100;
    cout << &i << endl;
    int&& j = i++;
    cout << &j << endl;


    int m = 199;
    int n = m++;
    cout << n << endl;


}