#include<stdio.h>
#include "string.h"

void sort(const char * name[],int n){
    const char *temp;
    int i,j,k;
    for ( i = 0; i < n-1; i++){
        k = i;//k最开始代表待比较字符串列表里面第一个字符串的下标，比较的目的为使其代表最小字符串的下标
        for ( j = i+1; j < n; j++){
           if( strcmp(name[k],name[j]) > 0 ){
               k = j;
           }
        }
        if(k != i){//表示k原先不是所比较字符串里面最小的字符串的下标 经过上述比较，变成了最小字符串的下标，所以k!=i了  
            temp = name[i];
            name[i] = name[k];
            name[k] = temp;
        }       
    }
}

void print(const char* name[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%s\n",name[i]);
    }
    
}

//指针数组
int main(){
    const char * str[] = {"zcd","app","hjk","oyr","nmh","cgk"};
    printf( "%d\n",sizeof( char ) );//1
    printf( "%d\n",sizeof( char* ) );//8
    printf( "%d\n",sizeof( str ) );//8*6
    printf( "%s\n",str[0] );//zcd
    printf( "%d\n",sizeof( str[0] ) );//8
    printf( "%s\n",str[1] );
    printf( "%s\n",str[2] );
    printf( "%s\n",str[3] );
    printf( "%s\n",str[4] );
    printf("--------------------------------------\n");
    int n = 6;
    sort(str,6);
    print(str,6);
}