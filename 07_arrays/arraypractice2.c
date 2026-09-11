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
     for(i=0;i<=4;i++)
        {
        printf(" %d",a[i]);
           
        }
    printf("\n");
      printf (" enter new value for 1 element: ");
    scanf("%d",&a[0]);
        
     for(i=0;i<=4;i++)
        {
        printf(" %d",a[i]);
           
        }
            
}