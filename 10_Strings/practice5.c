#include <stdio.h>

// to find string in string without using strstr function

int search(char a[], char b[])
{   printf("string a is : %s\n",a);
    printf("string b is : %s\n",b);

    int i;
    int j;
    int result=0;
    for(i = 0; a[i] != '\0'; i++)
    {   printf("i value is : %d\n",i);
        for(j = 0; b[j] != '\0'; j++)
        {   printf("j value is : %d\n",j);
            printf("a = %c b = %c \n", a[i+j],b[j]);
            // comparing elements 
            if(a[i + j] != b[j])
            {   printf("a[i+j] is : %d  %c\n",i+j,a[i+j]);
                printf("b[j] is : %d  %c\n",j,b[j]);
                break;
            }
            // to store the value from where string is found 
            result=i;
            printf("result is : %d\n",result);
        }

        if(b[j] == '\0')
        {
            printf("string found is : %s\n",b);
            return result; 
        } 
    } 
    printf("string not found\n");
    return 0;
    
}

void main(void)
{
    int result =0, i;
    char a[50];
    char b[30];
    printf("enter string: ");
    scanf(" %[^\n]", a);
    printf("enter string to search: ");
    scanf(" %[^\n]", b);

    // to print from string found till end of main string
    result = search(a, b); // accessing result value from function named as search 
    printf("final string is :");

    for(i=result;i<a[i]!='\0';i++)
    {
        printf("%c",a[i]);    
    }
    
}
