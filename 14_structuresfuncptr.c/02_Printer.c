#include<stdio.h>
// strcture to print msg 
typedef struct
{
    void (*print_msg)(void);
    
}printer;
// functn defn 
void function()
{
    printf("Hello from Driver!");
}
int main(void)
{
    printer p;
    p.print_msg=function;
    p.print_msg();// calling functn 
    return 0;
}