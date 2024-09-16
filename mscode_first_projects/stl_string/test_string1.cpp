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


	str.insert(3, "o");       //����
	cout << str << endl;//������Ϊ3��λ�ò����ַ���������ַ����κ���


	str.erase(12);//�Ӵ˴�������ʼɾ���˴��������������ַ�    ����
	cout << str << endl;

	str.replace(0,1,"zzz");//��str�滻ָ���ַ�������ʼλ��pos��ʼ����Ϊlen���ַ�
	cout << str << endl;

	cout << "----------------------------------------------------" << endl;

	str = "abcdefab";
	cout << str.find_first_of('a') << endl;//�ڶ�������Ϊ0��Ĭ�ϴ��±�Ϊ0��ʼ���ҡ�
	cout << str.find_first_of("hce") << endl;//���鴮hce��һ��������ԭ��str�е��ַ���c������str��c���±�2,�ʽ��Ϊ2��
	cout << str.find_first_of("ab", 1) << endl;//���±�Ϊ1��ʼ�飬���鴮ab��һ��������ԭ��str�е��ַ���b������b���±꣬���Ϊ1��
	cout << str.find_first_of('h') << endl;//ԭ��û�д����ַ�h���ʲ鲻��������npos��
	cout << str.find_first_of("hw") << endl;//�����Ӵ���һ�ַ���ԭ���ж��Ҳ������ʲ鲻��������npos��
	cout << "----------------------------------------------------" << endl;

	cout << str.find_last_of("wab") << endl;//ԭ�����һ���ַ�����������Ӵ���ÿһ���ַ�һһ�Ƚϣ�һ������ͬ�ľ����ԭ�����ַ����±�.�����Ϊb���±�7��
	cout << str.find_last_of("feb", 5) << endl;
	//��ԭ�����±�Ϊ5��ʼ������ң�����f������Ӵ�ÿһ�ַ��Ƚϣ�������ͬ�ľ�������ַ���ԭ�����±ꡣ
	//��һ����û�У�����������Ƚϣ���e��������Ӵ�һһ�Ƚϣ�ֱ��ԭ����b������Ӵ��е�b��ͬ��Ȼ�������b��ԭ�����±�1��
	cout << str.find_last_of("fab", 5) << endl;//���f��ԭ�����±�5��
	cout << str.find_last_of("fab", 7) << endl;//���b��ԭ�����±�7��
	cout << str.find_last_of("hwk") << endl;//ԭ��û�д����Ӵ����κ��ַ����ʷ���npos��

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


