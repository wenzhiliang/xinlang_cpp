#include<string>
#include<iostream>
using namespace std;

template<typename T>
typename T::size_type getlength(const T& c){
    if( c.empty() ){
        return 0;
    }
    return c.size();
}


int main()
{
    string mytest = "I Love China!";
    string::size_type size = mytest.size();
    cout << size << endl;

    string::size_type size2 = getlength(mytest);
    cout << size2 << endl;

    
}