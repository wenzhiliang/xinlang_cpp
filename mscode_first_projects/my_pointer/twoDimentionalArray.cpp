#include "stdio.h"
#include<iostream>
using namespace std;
int main()
{
	int tda[3][4] = { {99,1,2,3},{10,11,12,13},{20,21,22,23} };

	printf("sizeof(tda):%d\n", sizeof(tda) );//48
	printf("sizeof(tda[0]):%d\n", sizeof(tda[0]) );//16
	printf("sizeof(tda[0][0]):%d\n", sizeof(tda[0][0]));//4

	printf("%d\n", sizeof(tda[0]+1));//8
	printf("%d\n", sizeof(*tda[0]));//4

	printf("&tda[0][0]:%x\n", &tda[0][0] );//61fde0  
	printf("&tda[0][0]+1:%x\n", &tda[0][0]+1 );//61fde4
	printf("&tda[0]:%x\n", &tda[0]);//61fde0
	printf("&tda[0]+1:%x\n", &tda[0]+1);//61fdf0
	printf("&tda[1]:%x\n", &tda[1]);//61fdf0
	printf("&tda:%x\n", &tda);//61fde0

	cout << **tda << endl;;//99
	cout << *tda[0] << endl;//99
	cout << "----------------------------------------";
	int* p;
	int mm = 100;
	p = &mm;

	cout << sizeof(p) << endl;//8
	return 0;
}