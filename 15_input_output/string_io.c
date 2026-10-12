#include <stdio.h>

// code to understand use of gets puts

int main(void)
{
    char name[20];

    printf("enter your name: ");
    gets(name);

    printf("your name is: ");
    puts(name);

    return 0;
}