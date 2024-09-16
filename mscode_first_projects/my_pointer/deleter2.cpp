#include<iostream>
#include<memory>

using namespace std;


void myDeleter(string* pdel)
{
    delete pdel;
    pdel = nullptr;
}

int main()
{
    typedef void(*fp)(string*);
    unique_ptr<string,fp> ps1(new string("I love China"),myDeleter);
    
}