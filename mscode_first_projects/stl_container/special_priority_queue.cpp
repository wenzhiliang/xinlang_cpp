#include<iostream>
#include<queue>

using namespace std;

int main4444()
{
	priority_queue<int> pq;
	pq.push(89);
	pq.push(56);
	pq.push(45);
	pq.push(106);
	pq.push(99);

	cout << pq.empty() << endl;
	cout << pq.size() << endl;

	cout << pq.top() << endl;

	pq.pop();

	cout << pq.top() << endl;

	pq.emplace(33);

	cout << pq.top() << endl;


	return 0;
}


