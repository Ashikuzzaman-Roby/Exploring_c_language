#include<stdio.h>
int test_arithmetic(int a , int b){
    return a+b;
}

int  test_function2(char ch){
    printf("%c",ch);
    return ch;
}




// taking input and making some operation 

int input_taking(int a , int b){
    return a*b;
}

int main(){
    printf("__test function 1 \n");
    int a = test_arithmetic(4,5);
    printf("%d\n" , a);
    printf("----test function 2---\n");
    char c = test_function2('b');
    printf("Another print function of 2nd function %c\n",c);

    printf("new function to show \n");

    
    int v1,v2 ;
    printf("Enter the first value : ");
    scanf("%d", &v1);
    printf("Enter the second value : ");
    scanf("%d" , &v2);
    printf("The multiplication is %d\n", input_taking(v1,v2));




    





    return 0;


    
}