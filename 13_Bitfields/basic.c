#include<stdio.h>
// structure using bit fields 
typedef struct
{
    unsigned int age : 7;// 7 bits are used to store age 

}person;

int main()
{
    person p={10};
    printf("%d",p.age);
}