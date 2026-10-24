#include <stdio.h>
#include<string.h>
int main()
{
char name[50];
char str;
char *result;
printf(" enter string : ");
scanf("%s",name);
printf(" enter character you want to search: ");
scanf(" %c",&str);
result=strchr(name,str);

if(result !=0)
{
    printf(" char is found\n");
}

else
printf(" not found\n");
}