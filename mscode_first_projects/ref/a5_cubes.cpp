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

	cout << cube(x);
	cout << " = cube of " << x << endl; 
	cout << refcube(x);
	cout << " = cube of " << x << endl;


	//如果程序员的意图是让函数在使用传递给它的参数时，既不修改参数，又同时使用引用，则应当使用常量引用。
	//函数在使用基本数值类型时，应采用按值传递的方式。
	//函数在使用大的数据(如类和结构体)时，引用参数将很有用。

	return 0;
}