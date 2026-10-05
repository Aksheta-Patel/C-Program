#include<stdio.h>
#include<string.h>
// return structure from function 
typedef struct 
{
    int age;
    char name[20];

}person;
// function definition
person display()
{
    person p;

    printf(" enter name of person: ");
    scanf("%s",p.name);
    printf(" enter age of person: ");
    scanf("%d",&p.age);

    return p;

}
int main()
{
    person p;
    p = display();

    printf(" name of person is : %s\n ",p.name);
    printf("age of person is : %d\n ",p.age);

    return 0;

}
