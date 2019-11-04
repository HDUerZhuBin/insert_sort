#include"insert.h"
// #include"showArr.h"

void insertMethod(float arr[],int len_arr){
    if (1==len_arr){
        return;
    }
    float key = arr[len_arr-1];
    int tail = len_arr - 1 -1;
    int i;
    for(tail;tail>=0;tail--){
        // printf("key:%d\n",(int)key);
        if(key<arr[tail]){
            arr[tail+1] = arr[tail];
            if(0==tail){
                arr[tail] = key; //attention:when the tail is 0!!!
            }
        }else{
            arr[tail+1] = key;
            break;//also attention the break sentence
        }
    }
    return ;
}

void insert_sort(float arr[],int len_arr){
    int i;
    for(i=1;i<len_arr+1;i++){
        insertMethod(arr,i);
        // printf("current signal:");
        // show_arr(arr,len_arr);
    }
    return ;
}