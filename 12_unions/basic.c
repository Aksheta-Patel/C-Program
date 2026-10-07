#include <stdio.h>
// union to find details of person 
typedef union
{
    char name[20];
    int age;
} person;

int main(void)
{
    person per1;

    printf("enter name: ");
    scanf("%s", per1.name);

    printf("name = %s\n", per1.name);// in union u cant store both age name together as same memory location is shared 

    printf("enter age: ");
    scanf("%d", &per1.age);

    printf("age = %d\n", per1.age);// age or name in union not both 

    return 0;
}