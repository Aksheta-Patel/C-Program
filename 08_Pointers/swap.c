#include <stdio.h>

/**

* @file pointer_swap.c
* @brief Demonstrates swapping two pointer variables using a temporary pointer.
*
* @details
* This program declares two integer variables and three integer pointers.
*
* The pointers p and q store the addresses of variables a and b.
* A temporary pointer temp is used to exchange the addresses stored
* in p and q.
*
* Initially:
* * p points to a.
* * q points to b.
*
* After swapping:
* * p points to b.
* * q points to a.
*
* The values of a and b themselves are not changed. Only the addresses
* stored in the pointer variables p and q are exchanged.
*
* @return Returns 0 after successful execution.
  */

int main()
{
int a = 10, b = 5;
int *p, *q, *temp;


p = &a;
q = &b;

printf("a is %d\nb is %d\n", *p, *q);

temp = p;
p = q;
q = temp;

printf("swapped a value is %d\nswapped b value is %d\n", *p, *q);


}
