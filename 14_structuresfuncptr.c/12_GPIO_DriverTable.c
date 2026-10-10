#include <stdio.h>
// structure of driver table 

typedef struct
{
    void (*Init)(void);
    void (*SetHigh)(void);
    void (*SetLow)(void);
    void (*Toggle)(void);
} GPIO_Drv_t;

// function defn 

void Init(void)
{
    printf("GPIO initialized\n");
}

void SetHigh(void)
{
    printf("GPIO is high\n");
}

void SetLow(void)
{
    printf("GPIO is low\n");
}

void Toggle(void)
{
    printf("GPIO toggled\n");
}

int main(void)
{
    // GPIO driver table

    GPIO_Drv_t GPIO_Drv = {Init, SetHigh, SetLow, Toggle};

    // operate through the table
    
    GPIO_Drv.Init();
    GPIO_Drv.SetHigh();
    GPIO_Drv.SetLow();
    GPIO_Drv.Toggle();

    return 0;
}