#include<stdio.h>
// structure for calling multiple functions through pointers
typedef struct
{
    void (*init)(void);
    void (*on)(void);
    void (*off)(void);
    void (*toggle)(void);
   

}LED_Driver_t;

// functn defn
void init(void)
{
   printf(" led is initialized\n");
}
void on(void)
{
   printf(" led is on\n");
}
void off(void)
{
   printf(" led is off\n");
}
void toggle(void)
{
   printf(" led is toggled\n");
}
int main(void)
{
    LED_Driver_t led={init,on,off,toggle};
    led.init();//calling functions
    led.on();
    led.off();
    led.toggle();
    return 0;

}