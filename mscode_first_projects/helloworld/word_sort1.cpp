#include "stdio.h"
#include "string.h"
//bubble sort    大的字符串向后移
void sort(const char *str[],int n){
    const char* max;
    int i,j;
    for(i = 0 ; i<n-1 ; i++){
        for(j=0 ; j<n-1-i ; j++){
            if( strcmp(str[j],str[j+1]) > 0 ){
                max = str[j];
                str[j] = str[j+1];
                str[j+1] = max;
                max = nullptr;
            }
        }
    }
}

int main()
{
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
    int length = sizeof( str)/sizeof(str[0] );
    sort(str,length);

    //str[0] = "hhhh";//肯定可以修改

    for(int i = 0;i<6;i++){
        printf("%s\n",str[i]);
    }

}