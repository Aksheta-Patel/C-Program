#include <stdio.h>
// structure for switching 
typedef struct
{
    void (*Init)(void);
    void (*Read)(void);
    void (*Write)(void);
} Driver_t;

// functn defn
void A_Init(void) 
{ 
    printf("Driver A Init\n"); 
}

void A_Read(void) 
{ 
    printf("Driver A Read\n"); 
}

void A_Write(void) 
{  
    printf("Driver A Write\n");
}

void B_Init(void)
{ 
    printf("Driver B Init\n"); 
}

void B_Read(void) 
{ 
    printf("Driver B Read\n");
}

void B_Write(void)
{ 
    printf("Driver B Write\n"); 
}

int main(void)
{
    int choice;
    Driver_t A = {A_Init, A_Read, A_Write};
    Driver_t B = {B_Init, B_Read, B_Write};
    printf("1. Driver A\n2. Driver B\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        A.Init();
        A.Read();
        A.Write();
    }
    else if (choice == 2)
    {
        B.Init();
        B.Read();
        B.Write();
    }
    else
    {
        printf("invalid choice\n");
    }

    return 0;
}