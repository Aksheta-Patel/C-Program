#include <stdio.h>
int main()
{int choice;
printf("enter number\n");
scanf("%d",&choice);
switch(choice)
{
    case 1:
    printf("mon");
    break;
    case 2:
    printf("tue");
    break;
    case 3:
    printf("wed");
    break;
    case 4:
    printf("thur");
    break;
    case 5:
    printf("fri");
    break;
    case 6:
    printf("sat");
    break;
    case 7:
    printf("sun");
    break;
default:printf(" not a day\n");
}
}