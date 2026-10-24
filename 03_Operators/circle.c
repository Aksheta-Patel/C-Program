/**

* @file circle.c
* @brief Calculates the area and circumference of a circle.
*
* This program takes the radius of a circle from the user
* and calculates its area and circumference.
  */

#include <stdio.h>

int main(void)
{
float r;
float area;
float circumference;
char ch;


while (1)
{
    printf("Enter the radius: ");

    if (scanf("%f", &r) == 1 && r >= 0)
    {
        break;
    }

    printf("Invalid radius. Please enter a positive value again.\n");

    while (scanf("%c", &ch) == 1 && ch != '\n')
    {
    }
}

area = 3.14 * r * r;
circumference = 2 * 3.14 * r;

printf("Area of the circle is %.2f\n", area);
printf("Circumference of the circle is %.2f\n", circumference);

return 0;


}
