#include<stdio.h>

/**
 * @brief Checks whether a number is even or odd.
 *
 * @param a The number entered by the user.
 * @return int The return value of the function.
 */
int fun(int a);

/**
 * @brief Takes a number from the user and checks if it is even or odd.
 *
 * @param a The number to be checked.
 * @return int The return value of the function.
 */
int fun (int a)

{

    printf("enter number: ");

    scanf("%d",&a);

    if(a%2==0)
    {

        printf("it is even\n");

    }

    else
    {

        printf("odd\n");

    }

}

/**
 * @brief Main function of the program.
 *
 * @return int Returns 0 when the program finishes.
 */
int main()
{

    int a;
    fun(a);

}