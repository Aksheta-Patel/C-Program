#include <stdio.h>
int main()
{
    int a;
    char pass= 'p',fail='f';
    printf(" enter number");
    scanf("%d",&a);
    char result;
    result=(a>35)? pass: fail;
    printf("%c",result);

}