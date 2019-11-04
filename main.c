#include"insert.h"
#include"showArr.h"

int main(){
    float arr[] = {2,5,8,4,6,2,4,7,1,3};
    int len_arr = sizeof(arr)/sizeof(arr[0]);

    printf("before sorting:\n");
    int i;
    show_arr(arr,len_arr);

    insert_sort(arr,len_arr);
 
    printf("after sorting:\n");
    show_arr(arr,len_arr);

    return 0;
}