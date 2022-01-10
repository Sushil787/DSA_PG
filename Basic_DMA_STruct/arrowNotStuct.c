#include<stdio.h>

struct student
{
    int roll;
    char name[10];

} ;

int main(){
    struct student studentSecA;
    struct student *temp;
    temp=&studentSecA;
    int i=0;

        printf("input the roll of student %d: ",i);
        scanf("%d",&temp->roll);
        printf("input the name of student %d : ",i);
        scanf("%s",&temp->name);
        printf("\n");
        printf("student %d name is %s and roll is %d \n",i,temp->name,temp->roll);
        
        return 0;
}
