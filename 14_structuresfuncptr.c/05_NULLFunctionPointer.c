#include <stdio.h>
// structure to check null 
typedef struct
{
    void (*ptr)(void);
} person;

void display(void)
{
    printf("hello\n");
}

int main(void)
{
    person p = {NULL};

    if (p.ptr == NULL)
    {
        printf("error: pointer is NULL\n");
    }
    else
    {
        p.ptr();
    }

    return 0;
}