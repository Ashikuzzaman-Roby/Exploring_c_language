#include <stdio.h>
#include <string.h>

struct student{
    /* data */
    char name[100];
    int id ;
    float cg;
};


int main(){
    struct student s1 = {"Roby",23141023,3.2};
    struct student s2 = {"Rohan",23141024,3.7};
    struct student *ptr ;
    ptr = &s1;
    printf("studnet id is %d\n",(*ptr).id);

}