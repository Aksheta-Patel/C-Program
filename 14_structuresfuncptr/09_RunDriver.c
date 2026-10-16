#include <stdio.h>

typedef struct
{
    void (*Init)(void);
    void (*Read)(void);
} driver;

void init(void)
{
    printf("driver initialized\n");
}

void read(void)
{
    printf("reading data\n");
}

void run_driver(driver *d)
{
    d->Init();
    d->Read();
}

int main(void)
{
    driver d = {init, read};
    run_driver(&d);
    return 0;
}