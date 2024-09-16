#include <list>
#include <iostream>
using namespace std;
int main009() {
	list<int> list = {21,24,28,31};
	list.push_back(30);
	list.push_back(29);
	list.push_back(19);
	
	cout << list.empty() << endl;
	cout << list.size() << endl;
	cout << list.max_size() << endl;
	cout << list.front() << endl;
	cout << list.back() << endl;

	for (auto i = list.begin(); i!= list.end();++i){
		cout << *i << ":" << &i << endl;
		
	}
	cout << "hello" << endl;

	//list.insert();

	//压入首尾数据内存地址就变了，初步判断为重新创建了一个对象
	list.push_front(1);
	list.push_back(49);
	for (auto i = list.cbegin(); i != list.cend(); ++i) {
		cout << *i << ":" << &i << endl;

	}

	//弹出首尾数据内存地址就变了，初步判断为重新创建了一个对象
	cout << "弹出首尾数据：" << endl;
	list.pop_front();
	list.pop_back();
	for (auto i = list.cbegin(); i != list.cend(); ++i) {
		cout << *i << ":" << &i << endl;
	}

	//list.splice();

	//list.swap();

	list.sort();


	return 0;

}



