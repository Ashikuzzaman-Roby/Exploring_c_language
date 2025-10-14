// problem 01 : 
#include<stdio.h>
int odd_even(int n){
    if(n%2==0){
        printf("This is an even number %d\n" , n);
    }
    else{
        printf("This a and odd number\n");
    }
}


int greater_function(int x, int y, int z){
    if(x>y && x>z){
        printf("THe highest number is %d\n", x);
    }
    else if(y>x && y>z){
        printf("THe highest number is %d\n", y);
    }
    else{
        printf("THe highest number is %d\n", z);
    }
}




int leapyear(int n){
    if(n%4==0){
        if(n%100!=0){
            printf("%d",n, " is a leapyear\n");
        }
        else{
            printf("not a leapyear");
        }
    }
    if(n%400==0){
        printf("A leapyear\n");
    }

    else{
        printf("Not a leap year");
    }
}


void checking_vowel(char a){
    if(a == 'a' || a=='e' || a=='i' || a=='o' || a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U' ){
        printf("%c is a vowel\n",a) ;
    }
    else{
        printf("%c is a consonent \n",a);
    }
}


void factiorial_function(int x){
    int num =1;
    for(int i=x ;i>0;i--){
        num*=i ;

    }
    printf("The factorial value  is %d",num);
}


int main(){
    printf("___No 1 problem solution__\n");
    int x;
    printf("Enter a value : ");
    scanf("%d",&x);
    odd_even(x);
    printf("\n");
    printf("__two number assignemnt problem solution__\n");
    int m,n,w;
    printf("taking the first input: ");
    scanf("%d",&m);
    printf("taking the second input: ");
    scanf("%d",&n);
    printf("taking the third input: ");
    scanf("%d" , &w);
    greater_function(m,n,w);

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("__problem solution no 03__\n");
    int a;
    printf("Enter a year number : ");
    scanf("%d", &a);
    leapyear(a);
    printf("___4 no problem solving___\n ");
    char b;
    printf("Enter a character :");
    scanf(" %c",&b);
    checking_vowel(b);


    printf("__problem 22 solution__\n");
    int v ;
    printf("ENter a value : ");
    scanf("%d",&v);
    factiorial_function(v);

    
    return 0;
}