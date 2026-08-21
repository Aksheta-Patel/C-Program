#include <stdio.h>
int main()
{
    int a;
    char even,odd;
    printf(" enter number");
    scanf("%d",&a);
    int result;
    result=(a%2==0)? 0 : 1;
    printf("%d",result);

}