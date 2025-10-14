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
    int sum =1;
    for(int num=x ;num>0;num--){
         sum=sum*num;

    }
    printf("The factorial value  is %d",sum);
}


int  multiplication_function(int num, int counter){
    if(counter==0){
        return 1 ;
        
    }
    
    multiplication_function(num,counter-1);
    printf("%d\n",num*counter);
      
}


int prime_function(int x,int y){
    if(x == y){
        return 1  ; 
    }
    if(x%y==0){
        return 0 ;
    }
    return prime_function(x,y+1);



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

    printf("============================================\n");
    printf("\n");
    printf("___Multiplication of a number___\n");
    int v1,c1 ;
    printf("ENter a value : ");
    scanf("%d",&v1);
    printf("Enter a counter: ");
    scanf("%d", &c1);
    multiplication_function(v1,c1);


    printf("\n=======================\n");
    
    printf("judging a prime number\n");
    printf("judging a number is a prime number or not\n");
    int p , q=2;
    printf("Enter a number : ");
    scanf("%d", &p);
    int res = prime_function(p,q);
    if(res==0){
        printf("Not a prime number");
    }
    if(res==1){
        printf("IT's a prime number");
    }








    return 0;

    
  
}