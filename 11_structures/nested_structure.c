#include <stdio.h>
// nested structure 
typedef struct
{
    int day;
    int month;
    int yr;
} date;

typedef struct
{
    char name[20];
    date dob;// dob structure inside student structure
} student;

int main(void)
{
    student s;

    printf("enter name: ");
    scanf("%s", s.name);

    printf("enter date of birth: ");
    scanf("%d %d %d", &s.dob.day, &s.dob.month, &s.dob.yr);

    printf("name: %s\n", s.name);
    printf("dob: %d/%d/%d\n",s.dob.day, s.dob.month, s.dob.yr);

    return 0;

}
