#include<stdio.h>
int main()
{
 char a;
printf("Enter a character\n");
    scanf("%c",&a);

    if(a >= 'A' && a <= 'Z')
    {
        if(a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
        {
            printf("Vowel");
        }
        else
        {
            printf("Consonant");
        }
    }
    else if(a >= 'a' && a <= 'z')
    {
        if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        {
            printf("Vowel");
        }
        else
        {
            printf("Consonant");
        }
    }
    else
    {
        printf("Not an alphabet");
    }

}