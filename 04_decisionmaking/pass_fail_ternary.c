#include<stdio.h>

int main()
{
    int a,b,c,result;

    printf("Enter three numbers\n");
    scanf("%d %d %d",&a,&b,&c);

    result = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("Largest = %d",result);

}