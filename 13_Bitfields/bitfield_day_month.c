#include <stdio.h>

// code of bitfield structure 

typedef struct
{
    unsigned int day;
    unsigned int month;
} normal;

typedef struct
{
    unsigned int day : 5;
    unsigned int month : 4;
} bit;

int main(void)
{
    normal a;
    bit b;
    printf("Without bitfield: %zu bytes\n", sizeof(a));
    printf("With bitfield: %zu bytes\n", sizeof(b));

    return 0;
}
