#include <stdio.h>

int main(void)
{
    FILE *fp;
    char str[50];

    // open file in write mode
    fp = fopen("user.txt", "w");

    // check if file opened successfully
    if (fp == NULL)
    {
        printf("Error: Unable to open file\n");
        return 1;
    }

    // read string from user
    printf("Enter string to file: ");
    fgets(str, sizeof(str), stdin);

    // write string to file
    fputs(str, fp);

    // close file
    fclose(fp);

    return 0;
}