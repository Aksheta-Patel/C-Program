#include <stdio.h>
int main()
{int age;
    char gender;
    printf(" enter gender");
    scanf("%c",&gender);
    printf("enter age");
    scanf("%d",&age);
    if(gender=='M')
    {
        if(age>20)
        {
            printf("adult");
        }
    }
}