#include <stdio.h>
// structure of array using pointers
typedef struct
{
    int age;
    char name[20];
} person;

int main(void)
{
    person p[2];
    person *ptr[2];
    int i;

    // to add elements in array
    for (i = 0; i < 2; i++)
    {
        printf("enter name: ");
        scanf("%s", p[i].name);

        printf("enter age: ");
        scanf("%d", &p[i].age);

        ptr[i] = &p[i];// passing address of structure to pointer 
    }

    // to print array using pointers 
    for (i = 0; i < 2; i++)
    {
        printf("name: %s\n", ptr[i]->name);
        printf("age: %d\n", ptr[i]->age);
    }

    return 0;
}
