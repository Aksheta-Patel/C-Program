#include <stdio.h>
int main()
{
    char a;
    printf("Enter traffic light : ");
    scanf("%c", &a);
    if(a == 'R')
        printf("Stop\n");
    else if(a== 'Y')
        printf("Wait\n");
    else if(a == 'G')
        printf("Go\n");
    else
        printf("Invalid\n");
}