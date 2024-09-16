#include<iostream>
#include<vector>
#include<algorithm>
//#include<string>
using namespace std;

int main() {
	
	//generalSort();
	string str = "abcdefjhigklmn";
	cout << str.size() << endl;

	str.append("---");

	cout << str.at(2)   << endl;
	cout << str.front() << endl;
	cout << str.back()  << endl;

	cout << str.size()  << endl;
	cout << str.length() << endl;
	cout << str.max_size() << endl;
	cout << str.capacity() << endl;
	cout << "----------------------------------------------------" << endl;


	str.insert(3, "o");       //重载
	cout << str << endl;//在索引为3的位置插入字符，后面的字符依次后移


	str.erase(12);//从此处索引开始删除此处及其后面的所有字符    重载
	cout << str << endl;

	str.replace(0,1,"zzz");//用str替换指定字符串从起始位置pos开始长度为len的字符
	cout << str << endl;

	cout << "----------------------------------------------------" << endl;

	str = "abcdefab";
	cout << str.find_first_of('a') << endl;//第二个参数为0，默认从下标为0开始查找。
	cout << str.find_first_of("hce") << endl;//待查串hce第一个出现在原串str中的字符是c，返回str中c的下标2,故结果为2。
	cout << str.find_first_of("ab", 1) << endl;//从下标为1开始查，待查串ab第一个出现在原串str中的字符是b，返回b的下标，结果为1。
	cout << str.find_first_of('h') << endl;//原串没有待查字符h，故查不到，返回npos。
	cout << str.find_first_of("hw") << endl;//待查子串任一字符在原串中都找不到，故查不到，返回npos。
	cout << "----------------------------------------------------" << endl;

	cout << str.find_last_of("wab") << endl;//原串最后一个字符首先与待查子串的每一个字符一一比较，一旦有相同的就输出原串该字符的下标.。结果为b的下标7。
	cout << str.find_last_of("feb", 5) << endl;
	//从原串中下标为5开始逆向查找，首先f与待查子串每一字符比较，若有相同的就输出该字符在原串的下标。
	//若一个都没有，就依次逆向比较，即e再与待查子串一一比较，直到原串的b与待查子串中的b相同，然后输出该b在原串的下标1。
	cout << str.find_last_of("fab", 5) << endl;//输出f在原串的下标5。
	cout << str.find_last_of("fab", 7) << endl;//输出b在原串的下标7。
	cout << str.find_last_of("hwk") << endl;//原串没有待查子串的任何字符，故返回npos。

	return 0;
}


void generalSort() {
	int num;

	vector<int> v;
	while (cin >> num)
	{
		v.push_back(num);
		if (cin.get() == '\n')
		{
			break;
		}
		sort(v.begin(), v.end());
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	/*for (auto it = v.begin();it<= v.end();it++)
	{

		cout << *it << " ";
	}*/



}


