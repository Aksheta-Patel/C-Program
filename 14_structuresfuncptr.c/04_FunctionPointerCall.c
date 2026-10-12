#include<stdio.h>
// structure using functn ptr and derefrencing
typedef struct
{
    int age;
}person;

typedef struct
{
    void (*Init)(person *);//the function accepts a pointer to a person structure.
}driver;

void function(person *p)//p is a pointer to a person structure.
{
    p->age = 25;
    printf("age = %d\n", p->age);
}

int main(void)
{
    person obj;//structure variable named obj.
    driver Drv = {function};//Drv.Init is now connected to function()
    Drv.Init(&obj);// fnctn ptr
    (*Drv.Init)(&obj);// derefrencing the ptr 
    return 0;
}