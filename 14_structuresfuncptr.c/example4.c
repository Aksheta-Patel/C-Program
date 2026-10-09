#include <stdio.h>
typedef void (*Callback)(int , int);

int MyFunction(Callback cb)
{
  cb(10,20);
}

void MyCallback(int a , int b)
{
 printf("Sum (a+b):%d\n", (a+b));
}

int main(void)
{
 printf("Example: Function_ptr06: Callback function with function type\n");
 MyFunction(MyCallback);

}
