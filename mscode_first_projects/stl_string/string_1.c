#include "string.h"
#include "stdio.h"

//C������û���ַ������ͣ��ַ����Ǵ�����ַ������еġ�
int main() {
	//�ַ�����ĳ�ʼ��
	//1.��ʼ���б��ȰѸ����ַ����θ��������и�Ԫ�ء�
	char c[10] = { 'I',' ','a','m',' ','h','a','p','p','y'};

	//2.���� �ַ������� ���� �ַ�����ĳ�ʼ��
	char ca0[] = { "abcdEFGhigklmn" };

	char ca[] = "abcdEFGhigklmn";
	
	//�ַ���������
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



