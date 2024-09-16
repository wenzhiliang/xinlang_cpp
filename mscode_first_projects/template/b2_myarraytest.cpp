#include<iostream>
#include "b2_myarray.h"

using namespace std;

int main()
{
    {
        myarray<int,100> tmparr;
        tmparr.myfunc();    
    }
    
    {//使用默认的非类型模板参数
        myarray<int> tmparr1;
        tmparr1.myfunc();
    }

    //浮点型、类类型不能作为非类型模板参数
    //


}