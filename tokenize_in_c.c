#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void revemove_delimeter(char *ptr, int len ){
    int count =0;
    int idx=0;

    for(int i=0;i<len;i++){
        if(ptr[i]=='.'){
            count+=1;
        } 
    }
    printf("%d\n", count);
    char *new_s = (char *)malloc((len-count) * sizeof(char));

    if(new_s == NULL){
        printf("Memory allocation failed \n");
        return ;
    }


    
    for(int i= 0 ; i<len;i++ ){
        if(ptr[i]!='.'){
            new_s[idx]=ptr[i];
            idx+=1;

        }
        else{
            continue;
        }
    }
    new_s[idx]='\0';

    printf("%s\n",new_s);


    free(new_s);



}

void declare_result(char *ptr , int len){
    char first_num[5];
    char second_num[5];
    int count_1 = 0 ;
    int count_2 = 0 ;
    int idx ; 
    for(int i = 0 ; i<len ;i++){
        if(ptr[i]=='-'){
            idx = i;
            break;
        
            
        }
    }
    



    for( int i = 0 ; i<idx; i++){
        first_num[i]=ptr[i];
        count_1+=1 ; 

    }

    first_num[count_1]='\0';


    for(int i = idx+1 ; i<len ; i++){
        second_num[count_2]=ptr[i];
        count_2+=1;
    }

    second_num[count_2]='\0';

    printf("%c\n", first_num[0]);
    printf("%s\n", first_num);
    printf("%s\n",second_num);
    int num1 = atoi(first_num);
    int num2 = atoi(second_num);
    if(num1>num2){
        int diff = num1-num2;
        printf("Ronaldo's team has won the match by %d",diff);
    }
    else if(num1<num2){
        int dif = num2-num1;
        printf("Ronaldo's team has won the game %d",dif);
    }
    else{
        printf("It's a draw !!");
    }
}


int main(){
    char s[] = "I.Love.python";
    int len = sizeof(s)/sizeof(s[0]);
    revemove_delimeter(s , len);

    // taking an input from the user ; 

    char score[10];

    printf("ENter The score of Realmadrid and bercalona : ");
    scanf("%s",score);
    int len2 =strlen(score);
    declare_result(score , len2+1);






    return 0;
}