#include<iostream>
#include<memory>

using namespace std;
void myDeleter(int * p){
    delete p;
}

int main()
{
    shared_ptr<int> p( new int(12345) , myDeleter);
    shared_ptr<int> p2(p);
    p2.reset();
    p.reset();



}