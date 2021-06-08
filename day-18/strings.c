#include <stdio.h>

int main()
{
    char name[50];
    printf("Enter a string : ");
    scanf("%s", name);
    int len = 0;
    while (name[len] != '\0')
    {
        len++;
    }
    printf("Length %d ", len);
}