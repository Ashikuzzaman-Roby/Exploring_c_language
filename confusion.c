#include <stdio.h>
#include <string.h>
int main(){
    char *new_ptr = "Hello world";
    // new_ptr[0]='h';
    new_ptr = "New world";
    
    printf("%s\n" , new_ptr);
}