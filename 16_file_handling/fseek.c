#include <stdio.h>

// code to understand fseek 

int main(void)
{
    FILE *fp;
    fp = fopen("data.txt", "r");
    fseek(fp, 2, SEEK_SET);
    printf("%c\n", fgetc(fp));
    fclose(fp);

    return 0;
}