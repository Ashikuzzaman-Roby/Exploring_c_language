#include <stdio.h>
int main(){


    printf("All the way to access an array using pointers and normal : \n");
    
    int data_val[4]={30,40,50};
    

    
    printf("printing all the address of an array element:\n");

    printf("%p\n",data_val );
    printf("%p\n", data_val+1);
    printf("%p\n",data_val+2);
    printf("%p\n",data_val+3);

    int *ptr = data_val;
    printf("%p\n",ptr);
    printf("%p\n",ptr+1);
    printf("%p\n",ptr+2);

    printf("printing the values :\n");
    printf("%d\n", *data_val);
    printf("%d\n", *(data_val+1));
    printf("%d\n",*(data_val+2));


    printf("%d\n", *ptr);
    printf("%d\n",*(ptr+1));
    printf("%d\n",*(ptr+2));


    printf("value and address printing and full array access  \n");
    int (*ptr_arr)[4]=&data_val;
    printf("full array access %p\n",ptr_arr);
    printf("1st element address %p\n",ptr_arr[0]);
    printf("2nd address of array : %p\n",ptr_arr[1]);
    printf("3rd address of array : %p\n",ptr_arr[2]);

    printf("printing the value:\n");
    printf("first element value %d\n",(*ptr_arr)[0]);
    printf("second element value %d\n", (*ptr_arr)[1]);

    

}