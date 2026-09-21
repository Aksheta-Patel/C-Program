/**

* @file pack_unpack.c
* @brief Demonstrates packing and unpacking two 8-bit values.
*
* This program takes two integer values from the user, packs them
* into one integer using bitwise operators, and then unpacks the
* original values.
  */

#include <stdio.h>

/**

* @brief Entry point of the program.
*
* The program:
* * Takes two values between 0 and 255 from the user.
* * Packs both values into one integer.
* * Unpacks the first value using right shift and bitwise AND.
* * Unpacks the second value using bitwise AND.
* * Displays the packed and unpacked values.
*
* @return int Returns 0 on successful execution.
  */
  int main(void)
  {
  /** Stores the first 8-bit value */
  int a;

  /** Stores the second 8-bit value */
  int b;

  /** Stores the packed value */
  int x;

  /** Stores the unpacked first value */
  int a1;

  /** Stores the unpacked second value */
  int b1;

  char ch;

  while (1)
  {
  printf("Enter two values between 0 and 255: ");

  
   if (scanf("%d %d", &a, &b) == 2 &&
       a >= 0 && a <= 255 &&
       b >= 0 && b <= 255)
   {
       break;
   }

   printf("Invalid input. Please enter two values between 0 and 255 again.\n");

   while (scanf("%c", &ch) == 1 && ch != '\n')
   {
   }
  

  }

  /* Pack a and b into one value */
  x = (a << 8) | b;

  printf("Packed value is %d\n", x);

  /* Unpack a */
  a1 = (x >> 8) & 255;

  /* Unpack b */
  b1 = x & 255;

  printf("Unpacked first value is %d\n", a1);
  printf("Unpacked second value is %d\n", b1);

  return 0;
  }
