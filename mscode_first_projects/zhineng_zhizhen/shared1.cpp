#include<iostream>
#include<memory>
using namespace std;

int main()
{
    /***********************************use_count()***************************************/
    shared_ptr<int> myp( new int(100) );
    int icount = myp.use_count();
    cout << icount << endl;

    shared_ptr<int> myp2(myp);
    icount = myp.use_count();
    cout << icount << endl;

    shared_ptr<int> myp3;
    myp3 = myp2;
    icount = myp.use_count();
    cout << icount << endl;

    icount = myp3.use_count();
    cout << icount << endl;

    /****************************************unique()************************************/
    shared_ptr<int> p( new int(100) );
    if( p.unique() ){//条件成立
        cout << "p unique ok!" << endl;
    }
    shared_ptr<int> p2(p);
    if( p.unique() ){//条件不成立
        cout << "p unique ok!" << endl;
    }

    /***************************************reset******************************************/
    //reset()不带参数时
    shared_ptr<int> pre( new int(100) );
    pre.reset();
    if( pre == nullptr ){
        cout << "pre 被指控" << endl;
    }

    shared_ptr<int> pr( new int(100) );
    auto pr2(pr);
    cout << pr.use_count() << endl;//2
    cout << pr2.use_count() << endl;//2
    pr.reset();
    int r = pr.use_count();//0
    int r2 = pr2.use_count();//1
    cout << r << endl;
    cout << r2 << endl;

    //reset带参数时
    shared_ptr<int> pz( new int(100) );
    pz.reset( new int(1) );

    shared_ptr<int> pi( new int(100) );
    auto pi2(pi);
    pi.reset( new int(1) );
    if( pi.unique() ){
        cout << "pi unique ok!" << endl;
    }
    if( pi2.unique() ){
        cout << "pi2 unique ok!" << endl;
    }

    shared_ptr<int> pn;
    pn.reset( new int(100) );

}