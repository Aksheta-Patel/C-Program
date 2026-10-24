#include<stdio.h>
#include<stdlib.h>

// code to demonstrate memory leak

int main(void)
{
    int *p,i;
    for(i=0;i<5;i++)
    {
        p=malloc(sizeof(int));
        
    }
    return 0;
}