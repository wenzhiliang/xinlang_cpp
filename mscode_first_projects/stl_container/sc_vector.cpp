#include <iostream>
#include <vector>

using namespace std;

int main_vec() {

	vector<int> vec = {90,11,13,17};
	vec.push_back(0);
	vec.push_back(8);
	vec.push_back(5);

	for (auto i = vec.begin(); i != vec.end(); ++i) {
		cout << *i << " ";
	}
	cout << endl;
	vec.pop_back();
	for (auto i = vec.cbegin(); i != vec.cend(); ++i) {
		cout << *i << " ";	
	}
	cout << endl;
	for (auto i = vec.rbegin(); i != vec.rend(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;
	vec.push_back(1000);
	for (auto i = vec.crbegin(); i != vec.crend(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;


	cout <<  "is empty:" <<vec.empty() << endl;
	cout << vec.capacity() <<endl;
	cout << vec.size() << endl;
	cout << vec.max_size();

	cout << vec.front() << endl;
	cout << vec.back() << endl;
	

	
// vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    // for (const string& word : msg)
    // {
    //     cout << word << " ";
    // }
    // cout << endl;




	
	return 0;
}