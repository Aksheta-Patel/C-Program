#include<stdio.h>
int main()
{
    char b;
    printf("Enter alphabet\n");
    scanf("%c",&b);
    switch(b)
    {
        case 'a':
            printf(" vowel");
            break;

        case 'e':
            printf(" vowel");
            break;

        case 'i':
            printf(" vowel");
            break;

        case 'o':
            printf(" vowel");
            break;

        case 'u':
            printf(" vowel");
            break;

        default:
            printf(" consonant");
    }
}