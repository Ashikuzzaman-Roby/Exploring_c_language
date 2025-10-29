#include <stdio.h>
#include <stdlib.h>

// Question holo you have to take 5-6 numbers and you have to find the largest value form it . 
// 

int find_maximum(int *ptr , int len){

    int idx_val = ptr[0];
    for(int i =1;i<len ; i++){
        if(ptr[i]>idx_val){
            idx_val = ptr[i];
        }

    }
    return idx_val;
}

int main(){
    int *ptr = (int *)malloc(5*sizeof(int));
    if(ptr==NULL){
        printf("Memmory allocation is failed \n");
        exit(0);

    }
    for(int i = 0 ;i<5; i++){
        printf("ENter a value from 1  to  100 ");
        scanf("%d",&ptr[i]);
    }

    for(int i=0 ; i<5 ; i++){
        printf("%d\n",ptr[i]);

    }

    ptr=(int *)realloc(ptr,8*sizeof(int));
    if(ptr==NULL){
        printf("Memory reallocation is failed \n");
        exit(0);
    }
    for(int i=0 ; i<5 ; i++){
        printf("%d\n",ptr[i]);

    }
    int *new_ptr = (int *)realloc(ptr, 5*sizeof(int));
    if(ptr==NULL){
        printf("Memory allocation has failed \n");
        exit(0);
    }


    int len= sizeof(ptr)/sizeof(ptr[0]);



    int max_val = find_maximum(new_ptr,5);
    printf("THe max value of this array is %d\n",max_val);

    





}