#include<stdio.h>
#include<string.h>
int main()
{ int value;
    char a[2]="ok";
    char b[2]="Ok";
    value=strcmp(a,b);
    if(value==0)
    {
        printf(" strings are same ");
    }
    else
    printf("not same!");
}