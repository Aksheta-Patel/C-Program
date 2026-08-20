#include <stdio.h>
int main()
{int a,b,choice;
printf(" enter two numbers");
scanf("%d %d",&a,&b);
printf("enter 1,2,3 or 4");
scanf("%d",&choice);
switch(choice)
{
    case 1:
    printf("%d",a+b);
    break;
    case 2:
    printf("%d",a-b);
    break;
    case 3:
    printf("%d",a*b);
    break;
    case 4:
    if(b>0)
    printf("%d",a/b);
    else{
        printf("invalid");
    }
    break;
    
}}