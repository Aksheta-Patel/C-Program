#include <stdio.h>
// structure of students details
typedef struct 
{
    char name[20];
    int roll;
    int marks;
}student;

int main()
{
    student s[5];
    int i;
    for(i=0;i<=4;i++)
    {
        printf(" enter the name of student %d: ",i+1);
        scanf("%s",s[i].name);
       
        printf(" enter the roll of student %d : ",i+1);
        scanf("%d",&s[i].roll);
        
        printf(" enter the marks of student : ");
        scanf("%d",&s[i].marks);
        

    }
    // to display all details 
     for(i=0;i<=4;i++)
     {
        printf(" name of student %d is :%s\n",i+1,s[i].name);
        printf(" roll of student %dis :%d\n",i+1,s[i].roll);
        printf(" marks of student %d is :%d\n",i+1,s[i].marks);

     }

     
}
