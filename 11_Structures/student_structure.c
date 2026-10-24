#include <stdio.h>
// structure format
typedef struct
{
    char name[20];
    int roll_number;
    float marks;
} Student;

int main(void)
{
    Student s;
    char ch;
    int i;

    // validation
    do
    {
        printf("enter student name: ");
        scanf("%s", s.name);

        i = 0;

        while (s.name[i] != '\0')
        {
            if (s.name[i] >= '0' && s.name[i] <= '9')
            {
                printf("invalid input! enter name only\n");
                break;
            }

            i++;
        }

    } while (s.name[i] != '\0');

    // validation
    do
    {
        printf("enter roll number: ");
        if (scanf("%d", &s.roll_number) == 1 && s.roll_number > 0)
        {
            break;
        }
        else
        {
            printf("invalid input! enter number only\n");

            while (scanf("%c", &ch) == 1 && ch != '\n')
            {
            }
        }
    } while (1);

    // validation
    do
    {
        printf("enter marks: ");

        if (scanf("%f", &s.marks) == 1 && s.marks >= 0 && s.marks <= 100)
        {
            break;
        }
        else
        {
            printf("invalid input!\n");

            while (scanf("%c", &ch) == 1 && ch != '\n')
            {
            }
        }
    } while (1);

    printf("name: %s\n", s.name);
    printf("roll Number: %d\n", s.roll_number);
    printf("marks: %f\n", s.marks);

    return 0;
}