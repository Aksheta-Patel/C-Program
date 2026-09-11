#include <stdio.h>

int main() {
    int a[5];
int i;
    printf(" enter elements: ");
    
     for(i=0;i<=4;i++)
        {
            scanf("%d",&a[i]);
        
        }
    printf(" first element is %d\n",a[0]);
            printf(" third element is %d\n",a[2]);
            printf(" last element is %d\n",a[4]);
        
     for(i=0;i<=4;i++)
        {
        printf(" %d",a[i]);
           
        }
        
}