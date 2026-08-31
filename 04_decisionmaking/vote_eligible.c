/**
 * @file voting.c
 * @brief Checks whether a person is eligible to vote.
 */

#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * Takes the age from the user and checks whether
 * the person is eligible to vote.
 *
 * @return 0 if the program runs successfully.
 */
int main()
{
    /** Stores the age of the person */
    int a;

    printf("Enter age: ");
    scanf("%d", &a);

    if(a >= 18)
    {
        printf("Eligible to vote\n");
    }
    else
    {
        printf("Not eligible to vote\n");
    }

    return 0;
}