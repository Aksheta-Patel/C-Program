#include<stdio.h>
// structure for calling multiple functions through pointers
typedef struct
{
    void (*init)(void);
    void (*send)(void);
    void (*receive)(void);
    void (*deinit)(void);
   

}UART_Driver_t;

// functn defn
void init(void)
{
   printf("uart is initialized\n");
}
void send(void)
{
   printf("data is sent\n");
}
void receive(void)
{
   printf("data is receieved\n");
}
void deinit(void)
{
   printf("uart is deinitialized\n");
}
int main(void)
{
    UART_Driver_t driver={init,send,receive,deinit};
    driver.init();//calling functions
    driver.send();
    driver.receive();
    driver.deinit();
    return 0;

}