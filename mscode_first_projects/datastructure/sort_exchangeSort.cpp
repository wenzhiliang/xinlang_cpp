#include<iostream>
using namespace std;

//冒泡排序
void bubbleSort(int a[],int n)
{
    for( int i = 0; i < n-1; i++) {  //n个元素,进行n-1轮循环
        for(int j = 0; j < n-1-i; j++){
            if( a[j] > a[j+1] ) {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
}


//严蔚敏《数据结构》标准分割函数
int Paritition1(int a[], int i, int j) {
    int pivot = a[i];
    while (i < j) {
        while( a[j] >= pivot && i < j ) {
            --j;
        }
        a[i] = a[j];
        while( a[i] <= pivot && i < j) {
            ++i;
        }
        a[j] = a[i];
    }
    a[i] = pivot;
    return i;
}

void QuickSort(int A[], int left, int high) //快排母函数
{
    if (left < high) {
        int pivot = Paritition1(A, left, high);
        QuickSort(A, left, pivot - 1);
        QuickSort(A, pivot + 1, high);
    }
}




//快速排序，随机选取哨兵放前面
 void quickSort(int* a, int left, int right)
 {
    if(a==NULL) return;
    if(left>=right) return;
    
    int len = right-left;
    int kindex = rand()%(len+1)+left;//left是起始值，len+left是终止值 len+1是整数范围

    //这三行代码将基准点和首元素互换位置
    int tmp = a[left];
    a[left] = a[kindex];
    a[kindex] = tmp;
    
    int key = a[left];
    int i=left, j=right;
    while( i < j ) {
        while( a[j] >= key && i < j ) {//遇到小于基准数，则卡住
            j--;
        }
        if (i < j ) {//将遇到的那个小于基准值的数据放到h[i]处
            a[i] = a[j];
        }
        while( a[i] < key && i < j ){
            i++;
        }
        if(i<j) {
            a[j] = a[i];
        }
    }
     
     a[i]=key;
     
     QuickSort(a,left,i-1);
     QuickSort(a,j+1,right);
}


int main()
{
    int a[] = {100,7,3,2,9,15,8,81,72,56};
    int tmp;
    int len = sizeof(a)/sizeof(a[0]);

    //bubbleSort(a,7);

    quickSort(a,0,len-1);

    // for (int i = 0; i < len; i++)
    // {
    //     printf("%d\n",a[i]);
    // }

    // for (int i = 0; i < 50; i++)
    // {
    //     int m = rand()%10 + 5;
    //     cout << m << endl;
    // }

    int m = 9;

    int n = m / 2;
    cout << n << endl;




}