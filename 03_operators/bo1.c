#include <stdio.h>

int main()
{
    int a = 5, b = 3, r, i;

    // AND
    r = a & b;
    printf("AND = %d  Binary = ", r);

    for(i = 7; i >= 0; i--)
        printf("%d", (r >> i) & 1);

    // OR
    r = a | b;
    printf("\nOR = %d  Binary = ", r);

    for(i = 7; i >= 0; i--)
        printf("%d", (r >> i) & 1);

    // XOR
    r = a ^ b;
    printf("\nXOR = %d  Binary = ", r);

    for(i = 7; i >= 0; i--)
        printf("%d", (r >> i) & 1);

    // NOT
    r = ~a;
    printf("\nNOT = %d  Binary = ", r);

    for(i = 7; i >= 0; i--)
        printf("%d", (r >> i) & 1);

    // LEFT SHIFT
    r = a << 1;
    printf("\nLEFT = %d  Binary = ", r);

    for(i = 7; i >= 0; i--)
        printf("%d", (r >> i) & 1);

    // RIGHT SHIFT
    r = a >> 1;
    printf("\nRIGHT = %d  Binary = ", r);

    for(i = 7; i >= 0; i--)
        printf("%d", (r >> i) & 1);

    return 0;
}