#include <stdio.h>

void swap(int i, int j) {
    printf("��û����ʱi:%d\n", i);
    printf("��û����ʱj:%d\n", j);
    int tmp;
    tmp = i;
    i = j;
    j = tmp;
    printf("�����i:%d\n", i);
    printf("�����j:%d\n", j);
}

int sw(int *i,int *j) 
{
    int tmp;
    tmp = *i;
    *i = *j;
    *j = tmp;
    return 0;
}

int main4444()
{
    printf("Hello World!\n");
    int a = 10;
    int b = 15;
    swap(a, b);
    printf("%d\n", a);//10
    printf("%d\n", b);//15   Ϊɶ��û�н����ɹ���

    printf("-----------------------------------------");
    int* p1 = &a;
    int* p2 = &b;
    sw(p1, p2);
    printf("%d\n", a);//15
    printf("%d\n", b);//10

    return 0;
}

