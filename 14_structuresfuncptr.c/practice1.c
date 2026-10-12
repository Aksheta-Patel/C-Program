#include<stdio.h>

typedef struct 
{
  void (*init)(void);
  void (*read)(void);
  void (*deinit)(void);
  void (*write)(void);

}parameters;

void temp_init (void)
{
    printf(" temperature is initialized\n");
}
void temp_read (void)
{
    printf(" temperature is read\n");
}
void temp_deinit(void)
{
    printf(" temperature is deinitialized\n");
}
void temp_write (void)
{
     printf(" temperature is written\n");
}

int main(void)
{
    parameters p={temp_init,temp_read,temp_deinit,temp_write};
    p.init=temp_deinit;
    p.init();
    p.read();
    p.deinit();
    p.write();
    return 0;
}