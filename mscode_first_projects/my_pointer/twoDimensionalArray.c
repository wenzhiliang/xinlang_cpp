#include "stdio.h"

int main()
{

	int tda[3][4] = { {0,1,2,3},{10,11,12,13},{20,21,22,23} };

	printf("%d\n", sizeof(tda));//48
	printf("%d\n", sizeof(tda[0]));//16
	printf("%d\n", sizeof(tda[0][0]));//4

	printf("%d\n", sizeof(tda[0]+1) );//8
	printf("%d\n", sizeof(*tda[0]) );//4

	printf("%x\n", &tda[0][0]);//61fdf0
	printf("%x\n", &tda[0]);//61fdf0
	printf("%x\n", &tda);//61fdf0

	printf("%x\n", tda);//61fdf0
	return 0;

}