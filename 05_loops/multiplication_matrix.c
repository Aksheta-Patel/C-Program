#include <stdio.h>
int main()
{
  int i,j;
  //for table 1-10
  for(i=1;i<=10;i++)
  {
  //for num 1-10
    for(j=1;j<=10;j++)
    {
        printf("%d",i*j);
    
    }
    printf("\t");
  }

}