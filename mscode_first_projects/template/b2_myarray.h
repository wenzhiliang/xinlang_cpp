#ifndef __B2_MYARRAY__
#define __B2_MYARRAY__
//非类型模板参数

template<typename T,int size = 10>  //size 非类型模板参数,而且给了默认值
class myarray
{

private:
    T arr[size];

public:
    void myfunc();

};
#endif

template<typename T,int size>
void myarray<T,size>::myfunc(){
    std::cout << size << std::endl;
    return;
}

