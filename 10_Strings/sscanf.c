#include <stdio.h>
#include<string.h>
int main()
{
    char str[50]="88";
    int age;
    //To add the var value in string
    sscanf(str,"%d",&age);
    printf("%d",age);
}