#include<iostream>
using namespace std;

//直接插入排序
 void InsertSort(int* h, size_t len)
 {
    if(h==NULL) return;
    if(len<=1) return;

    for( int i = 1; i < len; ++i ) {
        for( int j = i; j > 0 && (h[j] < h[j-1]); j-- ) {
            int tmp = h[j];
            h[j] = h[j-1];
            h[j-1] = tmp;
        }
    } 
   return;
}

//直接插入排序
void InsertSort2(int array[],int len) 
{
	//第一个for循环 遍历无序序列 
	for( int i = 1; i < len; i++ ){
	 	int tmp = array[i];  //临时保存将要排序的元素 
        int j;//有序序列中的元素下标
	 	for( j = i-1; tmp < array[j] && j >= 0; j-- ) {
	 		//待排序元素 小于 有序序列中当前元素时 将该元素后移
	 		array[j+1] = array[j];
	 	}
	    array[j+1] = tmp;//此处的array[j+1]和上面的array[j+1]不一样
	}
}

//希尔插入排序
void shell_sort(int arr[],int n)
{
    register int i, j, tmp;
    int step;

    for( step = n/2; step > 0; step /= 2 ) { /*增量步长*/
    
        /*step = 4 2 1*/
        for(i = step; i < n; i++) {
            tmp = arr[i];
            j = i - step;
            for( ; j >= 0 && tmp < arr[j]; ) {
                arr[j + step] = arr[j];
                j -= step;
            }
            arr[j + step] = tmp;
        }
    }
}




int main()
{

    int m[10] = {78,56,98,78,44,13,108,99,101,128};
    //InsertSort2(m,10);
    shell_sort(m,10);

    for ( int i = 0; i < 10; i++ ) {
        cout << m[i] << endl;
    }



}
