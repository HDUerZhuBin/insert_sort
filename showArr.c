#include"showArr.h"

void show_arr(float arr[],int len_arr){
    int i;
    for(i=0;i<len_arr;i++){
        printf("%f,",arr[i]);
    }
    printf("\n");
    return ;
}