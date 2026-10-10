#include <stdio.h>

// structure to calculate 

typedef struct
{
    int (*add)(int, int);
    int (*sub)(int, int);
    int (*mul)(int, int);
    int (*div)(int, int);
} calculator;

// functn defn of various operations 

int add(int a, int b)
{ 
    return a + b;
}
int sub(int a, int b) 
{ 
    return a - b;
 }
int mul(int a, int b) 
{ 
    return a * b; 
}
int div(int a, int b)
{ 
    return a / b; 
}

int main(void)
{
    int a, b, choice;
    calculator c = {add, sub, mul, div};
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("1.add 2.sub 3.mul 4.div\n");
    scanf("%d", &choice);

    if (choice == 1)
    printf("%d\n", c.add(a, b));  

    else if (choice == 2)
    printf("%d\n", c.sub(a, b));

    else if (choice == 3)
    printf("%d\n", c.mul(a, b));

    else if (choice == 4 && b != 0)
    printf("%d\n", c.div(a, b));

    else
    printf("invalid choice");

    return 0;
}