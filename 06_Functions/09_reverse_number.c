#include <stdio.h>

/**
 * @brief Checks whether a number is a palindrome.
 *
 * @param n The number to be checked.
 */
int rev(int n)
{
    int result=0,q,r;
    q=n;
    while(q!=0){
        r=q%10;
        result=result*10+r;
        q=q/10;

    }
    printf("rev is : %d\n",result);

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
    rev(n);
}