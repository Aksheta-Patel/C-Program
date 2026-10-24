/**

* @file atm.c
* @brief Implements a simple menu-driven ATM system.
*
* This program allows the user to check the balance, deposit money,
* withdraw money, or exit the ATM system.
  */

#include <stdio.h>

/**

* @brief Entry point of the program.
*
* The program:
* * Displays an ATM menu.
* * Allows the user to check the balance.
* * Allows the user to deposit a positive amount.
* * Allows the user to withdraw an amount within the balance.
* * Repeats the menu until the user chooses to exit.
*
* @return int Returns 0 on successful execution.
  */
  int main(void)
  {
  /** Stores the user's menu choice */
  int choice;

  /** Stores the amount to be withdrawn */
  int withdrawal;

  /** Stores the amount to be deposited */
  int deposit;

  /** Stores the account balance */
  int balance = 1000;

  char ch;

  while (1)
  {
  printf("\n1. Check balance\n");
  printf("2. Deposit\n");
  printf("3. Withdrawal\n");
  printf("4. Exit\n");

  
   while (1)
   {
       printf("Enter your choice: ");

       if (scanf("%d", &choice) == 1 && choice >= 1 && choice <= 4)
       {
           break;
       }

       printf("Invalid choice. Please enter a number from 1 to 4 again.\n");

       while (scanf("%c", &ch) == 1 && ch != '\n')
       {
       }
   }

   switch (choice)
   {
       case 1:
           printf("Your current balance is %d.\n", balance);
           break;

       case 2:
           while (1)
           {
               printf("Enter the deposit amount: ");

               if (scanf("%d", &deposit) == 1 && deposit > 0)
               {
                   break;
               }

               printf("Invalid amount. Please enter a positive amount again.\n");

               while (scanf("%c", &ch) == 1 && ch != '\n')
               {
               }
           }

           balance = balance + deposit;

           printf("Deposit successful. Your current balance is %d.\n", balance);
           break;

       case 3:
           while (1)
           {
               printf("Enter the withdrawal amount: ");

               if (scanf("%d", &withdrawal) == 1 &&
                   withdrawal > 0 && withdrawal <= balance)
               {
                   break;
               }

               printf("Invalid amount. Please enter an amount within your balance again.\n");

               while (scanf("%c", &ch) == 1 && ch != '\n')
               {
               }
           }

           balance = balance - withdrawal;

           printf("Withdrawal successful. Your current balance is %d.\n", balance);
           break;

       case 4:
           printf("Thank you for using the ATM. Goodbye.\n");
           return 0;
   }
  

  }
  }
