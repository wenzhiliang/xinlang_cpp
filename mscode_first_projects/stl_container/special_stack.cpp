#include<iostream>
#include<stack>
using namespace std;

int main777()
{
	stack<int> stack;
	stack.push(89);
	stack.push(90);
	stack.push(78);
	stack.push(66);
	stack.push(102);

	cout << stack.empty() << endl;
	cout << stack.size() << endl;

	cout << stack.top() << endl;

	stack.pop();

	cout << stack.top() << endl;


	stack.emplace(111);

	cout << stack.top();










	return 0;
}
