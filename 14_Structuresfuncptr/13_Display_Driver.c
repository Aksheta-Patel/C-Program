#include <stdio.h>

// structure of various functns

typedef struct
{
    void (*Init)(void);
    void (*Clear)(void);
    void (*PrintChar)(void);
    void (*PrintString)(void);
} Display_Drv_t;

// functn defn 

void Init(void)
{
    printf("display initialized\n");
}

void Clear(void)
{
    printf("display cleared\n");
}

void PrintChar(void)
{
    printf("character: A\n");
}

void PrintString(void)
{
    printf("hello world\n");
}

int main(void)
{
    Display_Drv_t display = {Init, Clear, PrintChar, PrintString};
    display.Init();// functn calls
    display.Clear();
    display.PrintChar();
    display.PrintString();

    return 0;
}