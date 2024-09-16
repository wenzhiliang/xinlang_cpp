#include <algorithm>
#include<list>
#include<iostream>
#include<assert.h>
#include<vector>
#include<numeric>

using namespace std;

int  main_1() {

	const int x = max(3, 9);
	assert(x == 9);

	const int x1 = min(3, 9);
	assert(x1 == 3);


	list<int> L;
	L.push_back(3);
	L.push_back(1);
	L.push_back(7);

	list<int>::iterator result = find(L.begin(), L.end(), 7);
	assert(result == L.end() || *result == 7);
	cout << *result;
	//cout << *L.end();
	cout << (result == L.end()) << (*result == 7);


	/*const char S1[] = "Hello, world!";
	const char S2[] = "world";
	const int N1 = sizeof(S1) - 1;
	const int N2 = sizeof(S2) - 1;

	const char* p = search(S1, S1 + N1, S2, S2 + N2);
	printf("Found subsequence \"%s\" at character %d of sequence \"%s\".\n",S2, p - S1, S1);*/

	int A[] = { 2, 0, 4, 6, 0, 3, 1, -7 };
	const int N = sizeof(A) / sizeof(int);

	cout << "Number of zeros: "<< count(A, A + N, 0)<< endl;

	int xx = 1;
	int yy = 2;
	assert(xx == 1 && yy == 2);
	swap(xx, yy);
	assert(xx == 2 && yy == 1);

	/*vector<int> V;
	V.push_back(1);
	V.push_back(2);
	V.push_back(3);
	V.push_back(1);

	replace(V.begin(), V.end(), 1, 99);
	assert(V[0] == 99 && V[3] == 99);*/

	vector<double> V1(4);
	fill(V1.begin(), V1.end(), 137);
	assert(V1[0] == 137 && V1[1] == 137 && V1[2] == 137 && V1[3] == 137);


	/*list<int> L;
	generate_n(front_inserter(L), 1000, rand);

	list<int>::const_iterator it = min_element(L.begin(), L.end());
	cout << "The smallest element is " << *it << endl;

	list<int>::const_iterator itmax = max_element(L.begin(), L.end());
	cout << "The largest element is " << *itmax << endl;*/


	//vector<int> V;
	//V.push_back(3);
	//V.push_back(1);
	//V.push_back(4);
	//V.push_back(1);
	//V.push_back(5);
	//V.push_back(9);
	//copy(V.begin(), V.end(), ostream_iterator<int>(cout, " "));
	//// The output is "3 1 4 1 5 9".
	//vector<int>::iterator new_end = remove(V.begin(), V.end(), 1);
	//copy(V.begin(), new_end, ostream_iterator<int>(cout, " "));



	//vector<int> V;
	//V.push_back(0);
	//V.push_back(1);
	//V.push_back(2);
	//copy(V.begin(), V.end(), ostream_iterator<int>(cout, " "));
	//// Output: 0 1 2
	//reverse(V.begin(), V.end());
	//copy(V.begin(), V.end(), ostream_iterator<int>(cout, " "));
	//// Output: 2 1 0


	vector<int> V;
	V.push_back(1);
	V.push_back(3);
	V.push_back(3);
	V.push_back(3);
	V.push_back(2);
	V.push_back(2);
	V.push_back(1);

	vector<int>::iterator new_end = unique(V.begin(), V.end());
	copy(V.begin(), new_end, ostream_iterator<int>(cout, " "));
	// The output it "1 3 2 1".

	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	rotate(alpha, alpha + 13, alpha + 26);
	printf("%s\n", alpha);

	//int A1[] = { 1, 3, 5, 7 };
	//int A2[] = { 2, 4, 6, 8 };
	//const int N11 = sizeof(A1) / sizeof(int);
	//const int N22 = sizeof(A2) / sizeof(int);

	//merge(A1, A1 + N11, A2, A2 + N22,
	//	ostream_iterator<int>(cout, " "));
	//// The output is "1 2 3 4 5 6 7 8"



	int A1[] = { 1, 2, 3, 4, 5, 6, 7 };
	int A2[] = { 1, 4, 7 };
	int A3[] = { 2, 7, 9 };
	int A4[] = { 1, 1, 2, 3, 5, 8, 13, 21 };
	int A5[] = { 1, 2, 13, 13 };
	int A6[] = { 1, 1, 3, 21 };

	const int N1 = sizeof(A1) / sizeof(int);
	const int N2 = sizeof(A2) / sizeof(int);
	const int N3 = sizeof(A3) / sizeof(int);
	const int N4 = sizeof(A4) / sizeof(int);
	const int N5 = sizeof(A5) / sizeof(int);
	const int N6 = sizeof(A6) / sizeof(int);

	cout << "A2 contained in A1: "
		<< (includes(A1, A1 + N1, A2, A2 + N2) ? "true" : "false") << endl;
	cout << "A3 contained in A1: "
		<< (includes(A1, A1 + N2, A3, A3 + N3) ? "true" : "false") << endl;
	cout << "A5 contained in A4: "
		<< (includes(A4, A4 + N4, A5, A5 + N5) ? "true" : "false") << endl;
	cout << "A6 contained in A4: "
		<< (includes(A4, A4 + N4, A6, A6 + N6) ? "true" : "false") << endl;



	vector<int> V0(10);
	iota(V0.begin(), V0.end(), 7);
	copy(V0.begin(), V0.end(), ostream_iterator<int>(cout, " "));
	cout << endl;



	/*int A[] = { 1, 2, 3, 4, 5 };
	const int N = sizeof(A) / sizeof(int);
	cout << "The sum of all elements in A is "<< accumulate(A, A + N, 0)<< endl;
	cout << "The product of all elements in A is "<< accumulate(A, A + N, 1, multiplies<int>())<< endl;
*/



































































	return 0;
}


