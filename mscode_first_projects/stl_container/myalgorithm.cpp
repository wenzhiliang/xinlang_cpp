#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


bool mycomp(int i, int j) { return i > j; }
//�Ժ����������ʽ������ҹ���
class mycomp2 {
public:
    bool operator()(const int& i, const int& j) {
        return i > j;
    }
};
//int main() {
//    int a[7] = { 1,2,3,4,5,6,7 };
//    //�� a �����в���Ԫ�� 4
//    bool haselem = binary_search(a, a + 9, 4);
//    cout << "haselem��" << haselem << endl;
//    vector<int>myvector{ 4,5,3,1,2 };
//    //�� myvector ��������Ԫ�� 3
//    bool haselem2 = binary_search(myvector.begin(), myvector.end(), 3, mycomp2());
//    cout << "haselem2��" << haselem2;
//    return 0;
//}