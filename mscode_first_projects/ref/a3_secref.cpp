#include<iostream>

using namespace std;
//必须在声明引用变量时进行初始化
int main()
{
    int rats = 101;
    int & rodents = rats;
    cout << "rats=" << rats << ",rodents=" << rodents << endl;
    cout << "rats_address:" << &rats << "  rodents_address:" << &rodents << endl;

    int bunnies = 50;
    rodents = bunnies;//不是给bunnies绑定一个别名；而是给rodents赋予一个新值。
    cout << "rats=" << rats << ",rodents=" << rodents << ",bunnies=" << bunnies <<endl;
    cout << "rats_address:" << &rats << "  rodents_address:" << &rodents << "  bunnies_address:" << &bunnies << endl;
    //该案列表明，可以通过初始化声明来设置引用，但不能通过赋值设置
}