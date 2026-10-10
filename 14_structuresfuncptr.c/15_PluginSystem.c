#include <stdio.h>

// structure of plugin

typedef struct
{
    char name[20];
    void (*execute)(void);
} Plugin_t;

// functn defn 

void fun1(void)
{
    printf("executed\n");
}

void fun2(void)
{
    printf("executed\n");
}

void fun3(void)
{
    printf("executed\n");
}

int main(void)
{
    Plugin_t p[3] = 
    {
        {"plugin 1:", fun1},
        {"plugin 2:", fun2},
        {"plugin 3:", fun3}
    };

    int i;
    for (i = 0; i < 3; i++)
    {
        printf("%s", p[i].name);
        p[i].execute();// functn call
    }
    return 0;
}