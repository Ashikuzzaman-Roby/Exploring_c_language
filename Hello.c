#include<stdio.h>


void factiorial_function(int x){
    int num =1;
    for(int i=x ;i>0;i--){
        num*=i ;

    }
    printf("The factorial value  is %d",num);
}

int main(){
    int v ;
    printf("ENter a value : ");
    scanf("%d",&v);
    factiorial_function(v);
    


}