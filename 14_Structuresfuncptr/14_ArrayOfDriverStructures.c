#include <stdio.h>

// structure for A AND B SENSOR

typedef struct
{
    void (*Init)(void);
    void (*Read)(void);
} sensor;

// functn defn 

void Init_A(void)
{
    printf("Sensor A initialized\n");
}

void Read_A(void)
{
    printf("Sensor A reading\n");
}

void Init_B(void)
{
    printf("Sensor B initialized\n");
}

void Read_B(void)
{
    printf("Sensor B reading\n");
}

int main(void)
{
    sensor s[2] = {{Init_A, Read_A}, {Init_B, Read_B}};
    int i;
    for (i = 0; i < 2; i++)
    {
        s[i].Init();// functn call
        s[i].Read();
    }

    return 0;
}