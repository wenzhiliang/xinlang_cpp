#include<iostream>

using namespace std;
int main()
{
    int rats = 101;
    int * pt = &rats;
    int& rodents = *pt;
    int bunnies = 50;
    pt = &bunnies;//将pt改为指向bunnies,但不能改变rudents引用的是rats

    cout << "rats="<< rats << "  rodents=" << rodents << endl;
    cout << "bunnies=" << bunnies << " *pt=" << *pt << endl;



}