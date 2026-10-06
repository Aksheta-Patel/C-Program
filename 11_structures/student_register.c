#include<stdio.h>
#include<string.h>
#include"student_structure.h"
extern student_t s[50];

int main()
{
    int n,i,choice;
    printf("enter the number of students : ");
    scanf("%d",&n);

for(i=0;i<n;i++)
{
    printf("enter name of student %d : ",i+1);
    scanf("%s",s[i].name);
    printf("enter std of student : ");
    scanf("%d",&s[i].std);
    printf("enter roll of student : ");
    scanf("%d",&s[i].roll);

}

printf("1.find\n");
printf("2.edit\n");
printf("3.delete\n");
printf("4.exit\n");
printf("enter your choice : ");
scanf("%d",&choice);


}


