#include <iostream>
#include <array>

using namespace std;

void test_swap()
{
	array<int, 3> first = { 1, 2, 3 };
	array<int, 3> second = { 6, 5, 4 };
	cout << "first  array values: ";
	for (auto it = first.begin(); it != first.end(); ++it) {
		cout << *it << " ";
	}
	cout << std::endl;

	cout << "second array values: ";
	for (auto it = second.begin(); it != second.end(); ++it) {
		cout << *it << " ";
	}
	cout << std::endl;

	first.swap(second);  // swap
	cout << "swap array success!" << std::endl;

	cout << "first  array values: ";
	for (auto it = first.begin(); it != first.end(); ++it) {
		cout << *it << " ";
	}
	cout << std::endl;

	cout << "second array values: ";
	for (auto it = second.begin(); it != second.end(); ++it) {
		cout << *it << " ";
	}
	cout << std::endl;
}

void test_equal()
{
	array<int, 5> a = { 10, 20, 30, 40, 50 };
	array<int, 5> b = { 10, 20, 30, 40, 50 };
	array<int, 5> c = { 50, 40, 30, 20, 10 };

	if (a == b) {
		cout << "a == b" << std::endl;
	}else {
		cout << "a != b" << std::endl;
	}

	if (a == c) {
		cout << "a == c" << std::endl;
	}else {
		cout << "a != c" << std::endl;
	}

	if (a < c) {
		cout << "a < c" << std::endl;
	}else {
		cout << "a >= c" << std::endl;
	}
	cout << a.data() << endl;//返回的是指针
	cout << b.data() << endl;//返回的是指针
	cout << c.data() << endl;//返回的是指针
}

int main() {

	array<int, 8> arr = {12,67,29,34,100};
	arr.at(5) = 108;
	
	cout << "sizeof(arr):" << sizeof(arr) << endl;

	cout << "is empty?   "<< arr.empty()<< endl;
	cout << "arr.size():" << arr.size() << endl;
	cout << "arr.max_size():"<< arr.max_size() << endl;

	cout << "arr.data()   "<< arr.data() << endl;
	cout << "*arr.data()  "<< *arr.data() << endl;
	
	cout << "arr.front()  "<< arr.front() << endl;
	cout << "arr.back()   "<< arr.back() << endl;

	//cout << arr << endl;
	//cout << *arr << endl;
	
	cout << "&arr         "<< &arr << endl;
	cout << &arr[0] << endl;
	cout << &arr[1] << endl;
	cout << "#############################################"<< endl;

	for (auto a = arr.begin(); a != arr.end(); ++a) {
		if (*a == 12) {
			*a = 99;
		}
		cout << *a << endl;
	}
	cout << "-------------------------------------------" << endl;
	for (auto a = arr.rbegin(); a != arr.rend(); ++a) {
		cout << *a << endl;	
	}
	// cout << "-------------------------------------------" << endl;
	// for (auto a = arr.cbegin(); a != arr.cend(); ++a) {
	// 	/*if (*a == 12) {
	// 		*a = 99;//此语句编译通不过
	// 	}*/
	// 	cout << *a << endl;
	// }
	// cout << "-------------------------------------------" << endl;
	// for (auto a = arr.crbegin(); a != arr.crend(); ++a) {
	// 	/*if (*a == 12) {
	// 		*a = 66;
	// 	}*/
	// 	cout << *a << endl;
	// }
	// cout << "-------------------------------------------" << endl;
	// arr.fill(90);
	// for (auto a = arr.begin(); a != arr.end(); ++a) {
	// 	cout << *a << endl;
	// }


	return 0;
}

