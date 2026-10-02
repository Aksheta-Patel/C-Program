#include <stdio.h>
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
     for(i=0;i<=4;i++)
     {
        printf(" name of student %d is :%s\n",i+1,s[i].name);
        printf(" roll of student %dis :%d\n",i+1,s[i].roll);
        printf(" marks of student %d is :%d\n",i+1,s[i].marks);

     }
      int j;
      int a;
      j=s[1].marks;
     for(i=0;i<=4;i++)
     {  
        if(s[i].marks>j)
        {
           j=s[i].marks;
           a=i;
        }
        
     }
      printf(" highest marks obtained student %d is %d",a,j);
     
     
}
