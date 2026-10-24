#include <stdio.h>

int main()
{
char str[100];
int i, length = 0;
int start, end;
printf("Enter a string: ");
scanf("%s", str);
while (str[length] != '\0')
{
    length++;
}
start = 0;
end = length - 1;
while (start < end)
{
    if (str[start] != str[end])
    {
        printf("Not palindrome\n");
        return 0;
    }

    start++;
    end--;
}
printf("String is palindrome\n");
}
