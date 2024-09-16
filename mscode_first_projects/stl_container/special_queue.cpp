#include<iostream>
#include<queue>

using namespace std;

int main444()
{
	queue<int> queue;
	cout << queue.size() << endl;
	queue.push(21);
	queue.push(23);
	queue.push(29);
	queue.push(25);
	queue.push(19);

	
	cout << queue.front() <<endl;
	cout << queue.back() <<endl;
	cout << queue.size() << endl;

	queue.pop();
	cout << queue.front() << endl;
	cout << queue.back() << endl;
	cout << queue.size() << endl;

	queue.emplace(100);
	cout << queue.front() << endl;
	cout << queue.back() << endl;
	cout << queue.size();

	

	return 0;
}