#include<stdio.h>
int main()
{   int count=0,i;
    char name[10];
    printf("enter name : ");
    gets(name);
    while(name[i]!='\0')
    {
      count++;
      i++;
    }
    printf("%d",count);
}