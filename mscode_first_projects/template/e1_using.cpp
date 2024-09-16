#include<iostream>
#include<map>
using namespace std;

typedef unsigned int uint_t;
typedef std::map<std::string, int> map_s_i;

//实现一个key为string,value为任意类型的容器
//c++98时代的写法
template<typename wt>
struct map_s
{
    typedef std::map<std::string, wt> type;
};

//C++11新标准解决此类问题
template<typename T>
using str_map_t = std::map<std::string, T>;


int RealFunc(int i, int j)
{
    return 3;
}

//别名模板
template<typename T>
using myfunc_M = int(*)(T,T);

int main()
{
    map_s_i mymap;
    mymap.insert( {"first",1} );

    typedef std::map<std::string, std::string> map_s_s;
    map_s_s mymap2;
    mymap2.insert( {"first","firstone"} );


    map_s<int>:: type map1;
    map1.insert( {"first",1} );

    str_map_t<int> map2;
    map2.insert( {"first",1} );


    typedef unsigned int uint_t1;

    using uint_t = unsigned int;
    uint_t i = 100;
    cout << i << endl;


    typedef std::map<std::string, int> map_s_i1;
    using map_s_i2 = std::map<std::string, int>;

    typedef int(*Funtype)(int,int);
    using Funtype = int(*)(int,int);

    

    myfunc_M<int> pointFunc;
    pointFunc = RealFunc;
    cout << pointFunc(1,6) << endl;

}