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
    





    return 0;





}