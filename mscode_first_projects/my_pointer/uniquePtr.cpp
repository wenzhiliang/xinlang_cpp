#include<iostream>
#include<memory>

using namespace std;

int main()
{
    {//常规初始化
        unique_ptr<int> pi1;
        if( pi1 == nullptr ){
            cout << "pi1 目前还是空指针" << endl;
        }
        unique_ptr<int> pi2(new int(105) );
    }

    {//make_unique
        unique_ptr<int> p1 = std::make_unique<int>(100);
        auto p2 = std::make_unique<int>(200);
    }

    {//unique_ptr不支持的操作
        unique_ptr<string> ps1( new string("I Love China!") );

        //不支持复制动作
        //unique_ptr<string> ps2(ps1);
        //unique_ptr<string> ps3 = ps1;

        //不支持赋值动作
        //unique_ptr<string> ps4;
        //ps4 = ps1;
    }

    {//std::move
        unique_ptr<string> ps1(new string("I Love China!") );
        unique_ptr<string> ps3 = std::move(ps1);
        //cout << *ps1; //segmentation fault
        cout << *ps3 << endl;
    }
    
    {//release 置空智能指针变量，返回裸指针
        unique_ptr<string> ps1( new string("I Love China!") );
        unique_ptr<string> ps2(ps1.release() );
        if( ps1 == nullptr ){
            cout << "ps1 被置空！" << endl;
        }
        //ps2.release(); 会导致内存泄漏，但不会报错
        string* tmpp = ps2.release();
        delete tmpp;
    }

    {//reset member function
        unique_ptr<string> prs( new string("I Love China!") );
        prs.reset();
        if( prs == nullptr ){
            cout << "prs 被置空" << endl;
        }

        unique_ptr<string> prsdc1(new string("I Love China 1") );
        unique_ptr<string> prsdc2(new string("I Love China 2") );
        prsdc2.reset( prsdc1.release() );
        prsdc2.reset( new string("I Love China!") );
    }

    {//= nullptr
        unique_ptr<string> ps1( new string("I Love China!") );
        ps1 = nullptr;
    }

    {//指向一个数组
        unique_ptr<int[]> ptarray( new int[10]);
        ptarray[0] = 12;
        ptarray[1] = 24;
        ptarray[9] = 124;
    }

    {//get member function
        unique_ptr<string> ps1( new string("I Love China!") );
        string* ps = ps1.get();
        
        const char * p1 = ps->c_str();

        *ps = "This is a test very good!";
        const char * p2 = ps->c_str();
    }

    {//swap member function
        unique_ptr<string> ps1( new string("I Love China 1!") );
        unique_ptr<string> ps2( new string("I Love China 2!") );

        std::swap(ps1,ps2);
        ps1.swap(ps2);
    }

    {//智能指针名字作为判断对象
        unique_ptr<string> ps1(new string("I LOve China") );
        if( ps1){
            cout << "ps1 指向了一个对象" <<endl;
        }
    }

    {//转换成shared_ptr类型
        unique_ptr<string> ps(new string("I Love China") );
        shared_ptr<string> ps2 = std::move(ps);
    }
}