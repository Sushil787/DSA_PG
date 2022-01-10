#include<stdio.h>

struct student
{
    int roll;
    char name[10];

} student[3];

int main(){
    int i;//rolls;
    // char names[10];
    for (i=0 ; i<=2;i++){
        printf("input the roll of student %d: ",i);
        scanf("%d",&student[i].roll);
        printf("input the name of student %d : ",i);
        scanf("%s",&student[i].name);
        printf("\n");

    }
    for(i=0 ;i<=2;i++){
        printf("student %d name is %s and roll is %d \n",i,student[i].name,student[i].roll);
        
    }
    return 0;
}
