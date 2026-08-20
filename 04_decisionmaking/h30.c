#include <stdio.h>
int main()
{
    int choice,withdrawl,deposit;
    int balance=1000;
    printf("1.check balance\n");
    printf("2.deposit\n");
    printf("3.withdrawl\n");
    printf("4.exit\n");
    printf("enter your choice\n");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        printf("%d",balance);
        break;
        case 2:
        printf("enter amount to deposit\n");
        scanf("%d",&deposit);
        if(deposit>0)
        {balance = balance + deposit;
            printf("%d",balance);
        
        }
        else 
        {
            printf(" invalid");
        }break;
        case 3:
        printf("Enter withdrawl amount\n");
            scanf("%d", &withdrawl);
        if(withdrawl<=balance){
            balance =balance - withdrawl;
            printf("%d",balance);

        }
        else 
        {
            printf("invalid");
        }break;
        case 4: printf("exit");
        break;
        default:
    printf("invalid choice\n");
    }
}