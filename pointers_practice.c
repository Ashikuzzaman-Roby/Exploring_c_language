#include <stdio.h>

void function1(int *ab){
    printf("The address of pointer ab is %p\n",ab);
    printf("The content of ab is %d\n",*ab);
    int *ptr = ab;
    *ptr = 34;
    printf("THe content of the pointer is %d\n",*ptr);
    printf("The new location is %p\n",ptr);





}


void function_2(int m , float fx,char cht){
    
    // float fx =300.600006;
    // char cht = 'z';
    int *ptr1=&m;
    float *ptr2 = &fx;
    char *ptr3 = &cht;
    printf("The address of m %p\n",ptr1);
    printf("The address of fx %p\n",ptr2);
    printf("The address of cht %p\n",ptr3);

    printf("Printing the value of these boxes\n");
    printf("%d\n%f\n%c\n",*ptr1,*ptr2,*ptr3);



}


int function_04(int a,int b){
    int *ptr1 = &a ;
    int *ptr2 = &b;

    return *ptr1+*ptr2;


}

int function_05(int a , int b){
    int *ptr1=&a;
    int *ptr2=&b;
    return (*ptr1 * *ptr2);
}

void find_maximum(int a , int b){
    int *ptr1=&a ;
    int *ptr2 = &b;
    if(*ptr1 - *ptr2>0){
        printf("%d is greater than %d\n",*ptr1,*ptr2);
    }
    else if(*ptr2 - *ptr1>0){
        printf("%d is greater than %d\n",*ptr2,*ptr1);
    }
    else{
        printf("two values are same \n");
    }


}


int main(){
    printf("Problem no  1 solution : \n");
    int m = 10;
    int n,o;
    int *z = &m ;
    printf("The value  of z %d\n", *z);
    printf("%p\n",z);
    printf("%p\n%p",&n,&o);
    printf("\n");
    printf("2 no problem solution : \n");
    *z=29;
    printf("The new value of m is %d\n",*z );
    printf("or\n");
    printf("the value of m iis %d\n",m);
    
    printf("void function1 prints from here \n");
    function1(z);

    printf("\n");
    printf("Problem 03 prints from here\n");
    function_2(300,300.00006,'z');
    

    printf("Problem 04 : Add two numbers using pointers: \n");
    int val = function_04(5,6);
    printf("The value of 5 and 6 is %d\n",val);
    printf("problem 06: add two int taking from the users \n");
    int n1,n2;
    printf("Enter the first number : ");
    scanf("%d",&n1);
    printf("ENter the second value : ");
    scanf("%d",&n2);
    int val2=function_05(n1,n2);
    printf("multiple of n1 and n2 %d\n",val2);
    find_maximum(n1,n2);

    printf("Now array Problems using pointers \n");
    


   



    return 0;

}