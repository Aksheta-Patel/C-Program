#include <stdio.h>
int main()
{
    int n;

    // to continue multiples of 3
    for(n = 1; n <= 20; n++)
    {
        if(n % 3 == 0)
            continue;

        printf("%d ", n);
    }

}