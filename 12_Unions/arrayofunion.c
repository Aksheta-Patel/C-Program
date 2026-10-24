#include <stdio.h>
// union array to find details of person 
typedef union
{
    char name[20];
    int age;
} person;

int main(void)
{
    person p[20];
    int i;

 for(i=0;i<20;i++)

    {printf("enter name: ");
        scanf("%s", p[i].name);

        printf("name = %s\n", p[i].name);// in union u cant store both age name together as same memory location is shared 

        printf("enter age: ");
        scanf("%d", &p[i].age);

        printf("age = %d\n", p[i].age);// age or name in union not both 

       
    }
    return 0;
}