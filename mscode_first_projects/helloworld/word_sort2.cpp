#include "stdio.h"
#include "string.h"
#include<iostream>
#include<string>

using namespace std;

void word_sort(char a[][24]){
    char tmp[24];
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5-i; j++){
           if (strcmp(a[j],a[j+1]) == 1){
                strcpy(tmp,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],tmp);
           }
        }            
    }
}

main()
{
    const char * p = "zaa";
    const char * p1 = "gss";
    cout << (strcmp(p,p1) == -1) << endl;
    if((strcmp(p,p1) > 0)){
        std::cout<< "niiii" << endl;
    }

    char a[][24] = {"zabcd","app","hjk","oyr","nmh","cgk"};
    
    word_sort(a);
    for (int i = 0; i < 6; i++)
    {
       cout << a[i] << endl;
    }
    
   
}


