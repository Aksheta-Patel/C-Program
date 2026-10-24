#include <stdio.h>

// Structure definition 
typedef struct 
{
    int x;
    int y;
}person;

int main(void)
{
    person c = {10, 20};
    // using pointer
    person *ptr = &c;
    printf("%d %d\n", ptr->x, ptr->y);
    return 0;

}
