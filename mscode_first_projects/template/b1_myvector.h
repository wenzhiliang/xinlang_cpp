#ifndef __MYVECTOR__
#define __MYVECTOR__
/**
 * 类模板的定义
 * 因为实例化具体类的时候需要类模板的全部信息
 * 所以类模板的所有信息，不管是声明还是实现，都必须写到一个.h文件中去
 * 
 */

template<typename T>
class myvector
{
public:
    typedef T* myiterator;

public:
    myvector();//声明
    myvector& operator = (const myvector&);//赋值运算符重载
    //也可以写成
    //myvector<T>& operator = (const myvector<T>&);

public:
    myiterator mybegin();
    myiterator myend();

public:
    void myfunc(){};//定义：声明和实现写在一起
};
#endif

//在类模板额外部实现构造函数
template<typename T>
myvector<T>::myvector(){
}

//类模板名的使用
//类模板外部实现赋值运算符重载
template<typename T>
myvector<T>& myvector<T>::operator=(const myvector<T>&){
    //
    return *this;
}

//:: 第一种用法 表明后面是一个静态成员变量
//typename的一种用法：表明 ::后面的类容时一个类型
template<typename T>
typename myvector<T>::myiterator  myvector<T>::mybegin(){
    //
}