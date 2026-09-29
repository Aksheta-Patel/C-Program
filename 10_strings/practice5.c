#include <stdio.h>
void search(char a[], char b[])
{
int i;
int j;
for(i = 0; a[i] != '\0'; i++)
{
    for(j = 0; b[j] != '\0'; j++)
    {
        if(a[i + j] != b[j])
        {
            break;
        }
    }

    if(b[j] == '\0')
    {
        printf("string found");
        return;
    }
}

printf("string not found");


}

int main()
{
char a[50];
char b[30];
printf(" enter string: ");
scanf("%s", a);
printf(" enter string to search: ");
scanf("%s", b);
search(a, b);
}
