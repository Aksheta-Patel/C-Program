/**
 * @file triangle.c
 * @brief Checks the type of triangle based on its sides.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Takes three sides and checks whether the triangle is
 * equilateral, isosceles, or scalene.
 *
 * @return 0 if the program runs successfully.
 */
int main()
{
    /** First side of the triangle */
    int a;

    /** Second side of the triangle */
    int b;

    /** Third side of the triangle */
    int c;

    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a == b && b == c)
    {
        printf("Equilateral");
    }
    else if(a == b || b == c || a == c)
    {
        printf("Isosceles");
    }
    else
    {
        printf("Scalene");
    }

    return 0;
}