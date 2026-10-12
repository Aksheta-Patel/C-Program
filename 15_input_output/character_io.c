#include <stdio.h>

// code to understand use of getchar putchar


int main(void)
{
    char ch;

    printf("enter a character: ");
    ch = getchar();

    printf("character: ");
    putchar(ch);
    
    return 0;
}