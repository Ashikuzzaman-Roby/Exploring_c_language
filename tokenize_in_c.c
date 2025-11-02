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




int main(){
    char s[] = "I.Love.python";
    int len = sizeof(s)/sizeof(s[0]);
    revemove_delimeter(s , len);





    return 0;
}