#include<stdio.h>

int main()
{
    int a;
    char p,f,result;

    printf("Enter marks\n");
    scanf("%d",&a);

    result = (a>35) ? 'p' : 'f';

    printf("%c",result);

}