#include<stdio.h>
int main(){
    int n ,i,sum=0;
    for(i=1;i<7;i++)
    {printf("enter a number");
    scanf("%d",&n);
        if(n<0){
            continue;
        }sum=sum +n;}
        printf("%d=sum",sum);
    
}