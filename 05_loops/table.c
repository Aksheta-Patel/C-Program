#include<stdio.h>
int i,j;
int main(){
printf(" enter number");
scanf("%d",&j);
for (i=0;i<10;i++)
{
    printf("%d*%d =%d\n",j,i,i*j);
}
return 0;
}
