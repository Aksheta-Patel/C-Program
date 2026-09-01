#include <stdio.h>

/**
 * @brief Main function of the program.
 *
 * @return 0 if the program executes successfully.
 */
int main()
{
    /**
     * @brief Tells the compiler that variable a is defined in another file.
     */
    extern int a;

    printf("%d\n", a);

    return 0;
}
