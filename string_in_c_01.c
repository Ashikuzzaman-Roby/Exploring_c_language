// string problem solving : 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void palindrome_check(char *s,int len){
    char *ptr = (char  *)malloc(len * sizeof(char));
    if(ptr==NULL){
        printf("Memory allocation failed \n");
    }
    for(int i = 0 ; i<len;i++){
        ptr[i]= s[i];

    }
    for(int i =0 ;i<len-1;i++){
        printf("%c\n",*(ptr+i));
    }
    // printf("%c\n",*(ptr+len-2-0));
    printf("\n");
    int flag=0;
    for(int i = 0 ;i<len-1; i++){
        if(*(s+i) != *(ptr+(len-2-i))){
            flag=1;
            printf("Not a palindrome \n");
            break;

        }

    }
    


    if(flag==0){
        printf("%s is A palindrome\n ",s);
    }



    for(int i=0 ;i<len;i++){
        printf("%c\n",*(s+i));
    }
    free(ptr);

    
}



void reverse_func(char *s, int len){
    char *ptr = (char *)malloc(len*sizeof(char));
    for(int i =0 ;i<len ; i++){
        ptr[i]=s[i];
        // *(ptr+i)=*(s+i);
    }

    for(int i=0;i<len-1 ; i++){
        s[i]=ptr[len-2-i];

    }
    printf("%s\n", s);


}

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
    printf("problem  no 01 : Palendromic in string \n");
    char s[] = "abba";
    
    int len=strlen(s);
    palindrome_check(s,len+1);
    printf("%d\n",len);
    char new_s[]="roby";
    int len2 = sizeof(new_s)/sizeof(new_s[0]);
    palindrome_check(new_s,len2);


    printf("Reverse a string \n");
    printf("%d\n",len2);

    reverse_func(new_s, len2);


    printf("Reverse a word \n");
    char s1[] = "i.like.this.program.very.much" ;
    char *str =strdup(s1);
    printf("copy at a time in c : %s\n", str);


    // part 02 : 

    char s5[] = "I.Love.python";
    int len5 = sizeof(s5)/sizeof(s5[0]);
    revemove_delimeter(s5 , len5);

    // taking an input from the user ; 

    char score[10];

    printf("ENter The score of Realmadrid and bercalona : ");
    scanf("%s",score);
    int len6 =strlen(score);
    declare_result(score , len6+1);


    





    return 0;





}