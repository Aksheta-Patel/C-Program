#include <stdio.h>
/* Structure with structure tag */
typedef struct 
    {char name[20];
    int age;
    }person;

int main(void)
{
    //to Create structure variables using the structure tag 
    person p1;
    char ch;
    do
    {
        printf(" enter age of p1: ");

        if (scanf("%d%c", &p1.age, &ch) == 2 && p1.age > 0 && ch == '\n')
        {
            break;
        }

        printf("invalid input! enter numbers only\n");

        while (scanf("%c", &ch) == 1 && ch != '\n')
        {
        }

    } while (1);
    printf("%d\n", p1.age);
    return 0;
   
}