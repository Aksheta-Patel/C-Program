#include <stdio.h>

/**
 * @brief Calculates the sum of digits of a number.
 *
 * @param n The number whose digits are to be added.
 */
int sum(int n)
{
    int result=0,q,r;
    q=n;
    while(q!=0){
        r=q%10;
        result=result+r;
        q=q/10;

    }
    printf("sum of digits is : %d\n",result);
}

/**
 * @brief Main function of the program.
 *
 * @return int Program termination status.
 */
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    sum(n);
}