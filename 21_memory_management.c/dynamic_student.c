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
    student *p;
    p = malloc(sizeof(student));

    if (p == NULL)
    {
        return 1;
    }

    printf("enter name: ");
    scanf("%s", p->name);
    printf("enter roll no: ");
    scanf("%d", &p->roll);
    printf("enter marks: ");
    scanf("%f", &p->marks);
    printf("student details: \n");
    printf("name: %s\n", p->name);
    printf("roll no: %d\n", p->roll);
    printf("marks: %.2f\n", p->marks);

    free(p);

    return 0;
}