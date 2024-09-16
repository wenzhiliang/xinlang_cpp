#include <stdio.h>
#include <stdlib.h>
// ��a[s...m]��a[m+1...e]�������������й鲢Ϊ����
// �鲢������д������b�� 
void merge(int a[], long int s, int m, long int e)
{
    int i, j, k;
    // ������ʱ�ռ����������� 
    int* b = (int*)malloc(sizeof(int) * (e - s + 1));

    for (i = m + 1, k = 0, j = s; j <= m && i <= e; ++k)
    {
        if (a[j] <= a[i])
            b[k] = a[j++];
        else
            b[k] = a[i++];
    }
    while (j <= m)
    {
        b[k] = a[j];
        k++;
        j++;
    }
    while (i <= e)
    {
        b[k] = a[i];
        k++;
        i++;
    }
    // ������ɺ󣬸��Ƶ�ԭ����a
    for (i = s, k = 0; i <= e; i++, k++)
        a[i] = b[k];
    free(b);
}
// ��a[s...e]���н��й鲢���� 
void msort(int a[], int s, int e)
{
    if (s < e)
    {
        // ����������һ��Ϊ�� 
        int m = (s + e) / 2;
        msort(a, s, m);
        msort(a, m + 1, e);
        merge(a, s, m, e);
    }
}
void merge_sort(int a[], int length)
{
    msort(a, 0, length - 1);
}
//int main(void)
//{
//    int a[10] = { 4,3,1,2,6,5,0,9,8,7 };
//    merge_sort(a, 10);
//    int i;
//    for (i = 0; i < 10; i++)
//        printf("%d ", a[i]);
//    return 0;
//}
