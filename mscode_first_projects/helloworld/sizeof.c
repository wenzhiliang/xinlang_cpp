#include "stdio.h"
#include "string.h"
int main()
{
    char * p0 = "abcdefghi";
    printf("sizeof(p0):%d , strlen(p0):%d\n",sizeof(p0), strlen(p0));//8 9

    short as = 12;
    short * ps = &as;
    printf("sizeof(ps):%d , sizeof(as):%d\n",sizeof(ps),sizeof(as) );//8 2

    int  ai = 123L;
    int * pi = &ai;
    printf("sizeof(pi):%d , sizeof(ai)%d\n",sizeof(pi),sizeof(ai) );//8 4

    long  al = 123L;
    long * pl = &al;
    printf("sizeof(pl):%d , sizeof(al)%d\n",sizeof(pl),sizeof(al) );//8 4
 
    long long all = 999;
    long long * pll = &all;
    printf("sizeof(pll):%d , sizeof(all):%d\n",sizeof(pll),sizeof(all) );//8 8



    const char s0[] = "abcdef";
    printf("sizeof(s0):%d , strlen(s0):%d\n",sizeof(s0), strlen(s0));//7 6

    //容量为n的字符数组，存储字符串常量的字符个数为n-1,最后一个元素为终止符\0
    const char s1[7] = "qazwsx";
    printf("sizeof(s1):%d , strlen(s1):%d\n",sizeof(s1), strlen(s1));//7 6

    char * str[] = {"abc","de","fghi","k"};
    printf("%s\n", str[0] );//abc
    printf("%c", str[0][0] );//a
}