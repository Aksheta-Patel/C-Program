#include <stdio.h>
#include <stdlib.h>

// code of dynamic memory allocation for structure student

typedef struct
{
    char name[20];
    int roll;
    float marks;
} student;

int main(void)
{
    int n,i;
    student *p;
    printf("enter number of students : ");
    scanf("%d",&n);
    p = malloc(n * sizeof(student));

    if (p == NULL)
    {
        return 1;
    }

    for (i=0;i<n;i++)
    {   printf("enter name: ");
        scanf("%s", p[i].name);
        printf("enter roll no: ");
        scanf("%d", &p[i].roll);
        printf("enter marks: ");
        scanf("%f", &p[i].marks);
   }
    printf("\nstudent details: \n");

    for(i=0;i<n;i++)
    {
        printf("name: %s\n", p[i].name);
        printf("roll no: %d\n", p[i].roll);
        printf("marks: %.2f\n", p[i].marks);
    }
    free(p);

    return 0;
}