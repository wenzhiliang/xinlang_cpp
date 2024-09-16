#include "stdio.h"
#include "string.h"
#include<iostream>

//C中字符串的引用方式
//1：用字符数组存放一个字符串，通过数组名和下标引用字符串中的一个字符，也可以使用数组名和%s输出该字符串。
//2: 用字符指针变量指向一个字符串常量，通过字符指针变量引用字符串常量。

//C语言对字符串常量是按字符数组处理的，在内存中开辟了一个字符数组用来存放该字符串常量.
//通过字符数组名或字符指针变量可以输出一个字符串，而对于一个数值型数组，是不能企图用数组名输出它的全部元素的。

//单引号'' 引起的一个字符代表一个整数，整数值对应于该字符在编译器采用的字符集中的序列值。
//双引号"" 引起的字符串代表的是一个指向无名数组起始字符的地址。
int main() {

	const char * str = "I";
	printf("%s\n", str);
	printf("sizeof(str):%d\n", sizeof(str));//8
	printf("strlen(str):%d\n", strlen(str));//1

	char c = 's';
	printf("sizeof(char):%d\n", sizeof(c) );//1
	print("-----------------------------------------------------\n");

	const char* str1;
	str1 = "You love china!";//把字符串第一个元素的地址赋给字符指针。

	printf("%c\n", str1[0]);
	printf("%c\n",*str1);
	printf("%c\n",str1);//4 肯定错误   为啥会输出4？？？？？？？？
	printf("%s\n",str1);
	print("-----------------------------------------------------\n");

	char ca[] = { 'S','h','e',' ','i','s',' ','h','a','p','p','y' };
	printf("%c\n", ca[0]);
	printf("%c\n", *ca);
	//printf("%s\n", *ca);报错
	printf("%s\n", ca);

	printf("sizeof('a'):%d\n", sizeof('a'));//1
	printf("sizeof(ca):%d\n", sizeof(ca));//12
	printf("%d\n", strlen(ca));//14 ???????????


	return 0;
}