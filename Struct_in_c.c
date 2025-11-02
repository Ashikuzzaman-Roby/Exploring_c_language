#include <stdio.h>
#include <string.h>

struct student{
    /* data */
    char name[100];
    int id ;
    float cg;
};




int main(){
    struct student s1;
    strcpy(s1.name,"Roby");
    s1.id=23141023;
    s1.cg=3.2;

    printf("%s\n",s1.name);


    struct student s2;
    strcpy(s2.name,"Rahul");
    s2.id = 23101023;
    s2.cg=3.7;
    printf("%d\n", s2.id);
    printf("%s\n",s2.name);

    printf("array of structure :\n ");
    struct student ECE[100];
    struct student CSE[200];
    struct student IT[150];

    ECE[0].id=1;
    strcpy(ECE[0].name,"Rahim");
    ECE[0].cg=3.71;

    printf("%s is the first  ECE student \n",ECE[0].name);
    printf("and his cg is %f",ECE[0].cg);

    IT[0].id =23141025;
    strcpy(IT[0].name , "Hasim");
    IT[0].cg=3.8;
    printf("%s is the first  IT student \n",IT[0].name);
    printf("and his cg is %f",IT[0].cg);

    printf("Direct initializing : \n");
    struct student s3 = {"Mrittika", 22224096,3.46};
    struct student s4 = {"Erika",23101023,3.7};
    printf("name : %s Id is : %d and her/is cg%f\n",s3.name,s3.id,s3.cg);
    printf("name : %s Id is : %d and her/is cg%f\n",s4.name,s4.id,s4.cg);







}