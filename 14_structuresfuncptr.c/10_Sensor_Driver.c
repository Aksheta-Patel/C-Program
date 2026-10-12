#include <stdio.h>

// structure to print readings

typedef struct
{
    void (*Init)(void);
    void (*Read_data)(void);
    void (*get_status)(void);
} sensor_t;

// function defn

void Init(void)
{
    printf("sensor initialized\n");
}

void Read_data(void)
{
    printf("reading sensor data\n");
}

void get_status(void)
{
    printf("sensor is working\n");
}

int main(void)
{
    sensor_t s = {Init, Read_data, get_status};
    s.Init();// calling various functns
    s.Read_data();
    s.get_status();
    
    return 0;
}