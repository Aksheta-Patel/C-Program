#include <stdio.h>
int add(int a, int b)
{
return a + b;
}

int sub(int a, int b)
{
return a - b;
}

int cal(int x, int y, int (*p)(int,int))
{
int result;
result = p(x, y);
printf("%d\n", result);

}

int main()
{
int x, y,choice;
printf("enter two numbers: ");
scanf("%d%d", &x, &y);
printf("1.add\n");
printf("2.Sub\n");
printf("enter your choice: ");
scanf("%d",&choice);

if(choice == 1)
{
    cal(x, y, add);
}
else
{
    cal(x, y, sub);
}

}
