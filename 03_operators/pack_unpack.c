#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int x, a1, b1;

    // Pack a and b into one 16-bit number
    x = (a << 8) | b;

    printf("Packed = %d\n", x);

    // Unpack a
    a1 = (x >> 8) & 255;

    // Unpack b
    b1 = x & 255;

    printf("a = %d\n", a1);
    printf("b = %d\n", b1);
}