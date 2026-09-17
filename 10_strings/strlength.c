#include<stdio.h>
int main()
{   int count=0;
    char name[10];
    printf("enter name : ");
    gets(name);
    count=strlen(name);
    printf("string length is : %d\n",count);

}