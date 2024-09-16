#include<iostream>
using namespace std;
double refcube(const double &ra) {
	//ra *= ra * ra;表达式必须是可修改的左值
	return ra*ra*ra;
}
int main()
{
    double side = 3.0;
    double * pd = &side;
    double & rd  = side;
    long edge = 5L;
    double lens[4] = {2.0 , 5.0 , 10.0 , 12.0 };

    double c1 = refcube(side);
    double c2 = refcube(*pd);
    double c3 = refcube(rd);
    double c4 = refcube(lens[2]);
    double c5 = refcube(edge); //该情况下，编译器生成一个临时匿名变量，并让ra绑定它
    double c6 = refcube(7.0);//该情况下，编译器生成一个临时匿名变量，并让ra绑定它
    double c7 = refcube(side + 10.0);//该情况下，编译器生成一个临时匿名变量，并让ra绑定它

    cout << c1 << endl;//27
    cout << c2 << endl;//27
    cout << c3 << endl;//27
    cout << c4 << endl;//1000
    cout << c5 << endl;//125
    cout << c6 << endl;//343
    cout << c7 << endl;//2197

    /*
     如果引用形参是const，则编译器在如下两种情况下生成临时变量:
        1,实参的类型正确，但不是左值
        2，实参的类型不正确，但可以转化为正确的类型
       
     如果传入函数的实参不是左值或者与相应的const引用形参的类型不匹配，则C++将创建类型正确的匿名变量
     以将实参的值传递给该匿名变量，并让形参绑定该匿名变量
     推导出：如果形参为const,而传入的实参不匹配，则其行为类似于按值传递

     将引用形参声明为const的原因如下三个：
     1，避免无意中修改参数
     2，能够处理const和非const实参
     3，能够正确生成并使用临时变量
    
    */


    

}