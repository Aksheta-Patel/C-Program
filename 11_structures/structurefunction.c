#include<stdio.h>
#include<string.h>
// structure to pass in function
typedef struct 
{
    int age;
    char name[20];

}person;
// function definition
void display(person p)
{
    printf(" name of person is : %s\n ",p.name);
    printf("age of person is : %d\n ",p.age);

}
int main()
{
    person p;

    printf(" enter name of person: ");
    scanf("%s",p.name);
    printf(" enter age of person: ");
    scanf("%d",&p.age);

    display(p);//passing structure to funtion
    return(0);

    
}
