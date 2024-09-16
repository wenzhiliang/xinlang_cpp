#include <iostream>
#include <utility>

using namespace std;
int main() {

	typedef std::pair<int, float> IntFloatPair;

	IntFloatPair p(42,3.14);
	cout << get<0>(p);
	cout << get<1>(p);
	cout << tuple_size<IntFloatPair>::value;

	//cout << std::tuple_element<0, IntFloatPair>::type;

	return 0;


}