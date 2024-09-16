#include<iostream>
#include<deque>

using namespace std;

int main()
{

	deque<int> deque = { 13,15,17,19 };

	cout << deque.empty() << endl;
	cout << deque.size() << endl;
	cout << deque.max_size() << endl;
	cout << deque.front() << endl;
	cout << deque.back() << endl;

	for (auto i = deque.begin(); i != deque.end(); ++i)
	{
		cout << *i << ":" << &i << endl;
	}
	cout << endl;

	deque.push_front(11);
	deque.push_back(21);

	for (auto i = deque.begin(); i != deque.end(); ++i)
	{
		cout << *i << ":" << &i << endl;
	}
	cout << endl;

	deque.pop_front();
	deque.pop_back();

	for (auto i = deque.cbegin(); i != deque.cend(); ++i)
	{
		cout << *i << ":" << &i << endl;
	}
	cout << endl;
	
	deque.emplace_front(1);
	deque.emplace_back(99);
	for (auto i = deque.cbegin(); i != deque.cend(); ++i)
	{
		cout << *i << ":" << &i << endl;
	}
	cout << endl;


	//deque.emplace();


	return 0;
}
