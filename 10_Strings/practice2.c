#include<stdio.h>
#include<string.h>
void compare(char a[], char b[])
{   // using result as flag 
    int i,result=0;
    for(i=0;a[i]!=0||b[i]!=0;i++)
    {   // to check if both strings are equal 
        if(a[i]!=b[i])
        {
            result=1;
        }
        
    }  

    if(result==1)
    printf(" not equal");
    else
    printf("equal");
  
}
int main()
{   char a[30],b[30];
    printf(" enter two strings: ");
    scanf("%s%s",a,b);
    compare(a,b);
}
