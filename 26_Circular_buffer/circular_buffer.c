#include <stdio.h>
struct Buffer
{
    int data[5];
    int read;
    int write;
    int count;
};

int main(void)
{
    struct Buffer b;
    b.read = 0;
    b.write = 0;
    b.count = 0;

    // insert elements
    if (b.count == 5)
    {
        printf("buffer is full\n");
    }
    else
    {
        b.data[b.write] = 10;
        b.write = (b.write + 1) % 5;
        b.count++;
    }

    if (b.count == 5)
    {
        printf("Buffer is full\n");
    }
    else
    {
        b.data[b.write] = 20;
        b.write = (b.write + 1) % 5;
        b.count++;
    }

    if (b.count == 5)
    {
        printf("buffer is full\n");
    }
    else
    {
        b.data[b.write] = 30;
        b.write = (b.write + 1) % 5;
        b.count++;
    }

    // to display elements
    printf("buffer elements : ");

    for (int i = 0; i < b.count; i++)
    {
        printf("%d ", b.data[(b.read + i) % 5]);
    }

    if (b.count == 0)
    {
        printf("\nbuffer is empty\n");
    }
    else
    {
        printf("\nread element : %d", b.data[b.read]);

        b.read = (b.read + 1) % 5;
        b.count--;
    }

    // display after reading
    printf("\n after reading : ");

    for (int i = 0; i < b.count; i++)
    {
        printf("%d ", b.data[(b.read + i) % 5]);
    }

    printf("\n");
    return 0;
}