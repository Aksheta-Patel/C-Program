#include<stdio.h>
#include<string.h>
int main()
{   char place[6]={"delhi"};
    char name[30]={"nayana"};
    strcat(name,place);
    printf("%s", name);
}