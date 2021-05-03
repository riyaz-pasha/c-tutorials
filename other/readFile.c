#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[500];
    FILE *fptr;
    // fptr = fopen("./textFile.txt", "r");
    fptr = fopen("./TestSheet1.csv", "r");

    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    fscanf(fptr, "%s", string);

    printf("Value of n=%s", string);
    fclose(fptr);

    return 0;
}