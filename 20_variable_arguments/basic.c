#include <stdio.h>
#include <stdarg.h>

// code of variable arguments function

void display(int n, ...)
{
    va_list a;
    va_start(a, n);
    while(n--)
    printf("%d ", va_arg(a, int));
    va_end(a);
}

int main()
{
    display(3, 10, 20, 30);

    return 0;
}
