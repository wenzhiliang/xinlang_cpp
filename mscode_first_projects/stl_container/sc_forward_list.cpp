#include<iostream>
#include<forward_list>

using namespace std;

int main00002() {	
	forward_list<int> forwardList = { 1,2,3,4,5,9,8,7,6 };
	cout << forwardList.empty() << endl;
	cout << forwardList.max_size() << endl;
	cout << forwardList.front() << endl;

	for (auto i = forwardList.begin(); i != forwardList.end(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;

	forwardList.insert_after(forwardList.before_begin(),15);

	for (auto i = forwardList.cbegin(); i != forwardList.cend(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;

	forwardList.push_front(11);
	for (auto i = forwardList.begin(); i != forwardList.end(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;

	forwardList.pop_front();
	for (auto i = forwardList.begin(); i != forwardList.end(); ++i)
	{
		cout << *i << " ";
	}
	cout << endl;

	
	//forwardList.erase_after();
	//forwardList.assign();

	//push_front与emplace_front有区别吗
	forwardList.emplace_front(100);
	for (auto i = forwardList.begin(); i != forwardList.end(); ++i)
	{
		cout << *i << " ";
	}

	return 0;
}