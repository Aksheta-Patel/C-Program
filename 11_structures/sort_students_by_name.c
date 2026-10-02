#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[20];
} student;

int main()
{ 
    student s[3];
    int i,j;
    student temp;

    for(i=0;i<=2;i++)
    {
        printf("enter name of student: ");
        scanf("%s",s[i].name);
    
    }

    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(strcmp(s[i].name,s[j].name)>0)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;

            }
        }
    }
    
    printf("students name in alphabetical order are : \n");
    for(i = 0; i < 3; i++)
    {
        printf("%s\n", s[i].name);
    }

return 0;

}


