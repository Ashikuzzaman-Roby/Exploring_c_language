
#include<stdio.h>




int main(){
    int a =5;
    int my_arr[4]={1,2,3,4};
    int *ptr = &my_arr[0];
    printf("%d\n",*ptr);

    int (*ptr_1)[4]=&my_arr;
    (*ptr_1)[2]=8;
    printf("%d\n",(*ptr_1)[2]);




    int len = sizeof(my_arr)/sizeof(my_arr[0]);
    
    printf("len of this myarray is %d\n",len);


}