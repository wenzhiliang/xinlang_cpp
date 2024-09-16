#include<iostream>
using namespace std;


class demo
{
public:
	demo():num(new int(0)) {
		cout << "demo construct" << endl;
	}
	
	demo(const demo &d):num(new int(*d.num)) {
		cout << "demo copy construct" << endl;
	}
	
	~demo() {
		cout << "demo des_construct" << endl;
	}
	
	private:
		int *num;
};

demo get_demo()
{
	cout << "get_demo() func" << endl;
	return demo();
}

int main() {
	demo a = get_demo();
	return 0;
}
