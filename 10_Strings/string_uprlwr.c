#include <stdio.h>
#include<string.h>
int main()
{
    char s1[15];
    int i;
    printf(" enter a string : ");
    gets(s1);
    for (i=0;s1[i]!=0;i++)
    {
        if(s1[i]>='A'&& s1[i]<='Z')
        {
            s1[i]=s1[i]+32;
        }
    }
    printf("%s",s1);
}