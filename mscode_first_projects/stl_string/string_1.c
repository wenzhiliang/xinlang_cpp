#include "string.h"
#include "stdio.h"

//C语言中没有字符串类型，字符串是存放在字符数组中的。
int main() {
	//字符数组的初始化
	//1.初始化列表：既把各个字符依次赋给数组中各元素。
	char c[10] = { 'I',' ','a','m',' ','h','a','p','p','y'};

	//2.采用 字符串常量 进行 字符数组的初始化
	char ca0[] = { "abcdEFGhigklmn" };

	char ca[] = "abcdEFGhigklmn";
	
	//字符串处理函数
	puts(ca);

	/*char ca1[24];
	gets(ca1);
	puts(ca1);*/

	/*char * mm = strcat(ca0,ca);
	puts(mm);*/

	char str[10];
	strcpy(str, c);
	printf("%s\n",str);

	strncpy(str, ca, 5);
	puts(str);

	int len = strlen(str);
	printf("%d\n", len);

	//strcmp

	//strlwr   strupr

	return 0;
}



