#include <stdio.h>

void function1(int *ab){
    printf("The address of pointer ab is %p\n",ab);
    printf("The content of ab is %d\n",*ab);



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


    return 0;

}