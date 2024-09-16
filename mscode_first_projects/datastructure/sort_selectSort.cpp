#include<iostream>
using namespace std;

void swap(int arr[],int a,int b)
{
    arr[a] = arr[a]+arr[b];
    arr[b] = arr[a]-arr[b];
    arr[a] = arr[a]-arr[b];
}

//简单选择排序
void selectSort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) { //n个元素，n-1轮循环
        int min = i;
        for ( int j = i + 1; j < n; j++ ) {
            if ( arr[j] < arr[min] ) {
                min = j;
            }
        }
        //进行交换，如果min发生变化，则进行交换
        if (min != i) {
            swap(arr,min,i);
        }
    }
} 





int main()
{

int m[10] = {78,56,98,78,44,13,108,99,101,128};
    //InsertSort2(m,10);
    selectSort(m,10);

    for ( int i = 0; i < 10; i++ ) {
        cout << m[i] << endl;
    }


}