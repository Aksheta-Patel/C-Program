#include<stdio.h>
#include<string.h>
// structure to access value using pointers
typedef struct
{
    int age;
}person;

int main()
{
    person p;
    person *ptr;
    
    printf(" enter age : ");
    scanf("%d",&p.age);
    ptr=&p;
    printf(" age : %d",ptr->age);// use of pointer ptr to access
    return 0;

}
