#include <iostream>

using namespace std;

double cube(double a) {
	a *= a * a;
	return a;
}

double refcube(double &ra) {
	ra *= ra * ra;
	return ra;
}

int main() {
	double x = 3.0;
	
    double z = cube(x+2.0);
    cout << z << endl;

    z = cube(8.0);
    cout << z << endl;

    int k = 10;
    z = cube(k);
    cout << z << endl;

    double yo[3] = {2.2 , 3.3 , 4.4};
    z = cube(yo[2]);
    cout << z << endl;
    cout << "--------------------------------------------------------------";

    double y;
    //y = refcube(x+2.0);非常量引用的初始值必须为左值
    cout << y << endl;

    //y = refcube(8.0);非常量引用的初始值必须为左值
    cout << y << endl;

    int k = 10;
    //y = refcube(k);无法用 "int" 类型的值初始化 "double &" 类型的引用(非常量限定)
    cout << y << endl;

    double yo[3] = {2.2 , 3.3 , 4.4};
    y = refcube(yo[2]);
    cout << y << endl;





	return 0;
}