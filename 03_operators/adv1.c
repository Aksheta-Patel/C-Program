#include <stdio.h>

int main()
{
    int a = 10, b = 5, c = 2;
    int r1 = a + b * c;
    printf("Without parentheses = %d\n", r1);
    int r2 = a + (b * c);
    printf("With parentheses = %d\n", r2);
}