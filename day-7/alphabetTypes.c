#include <stdio.h>
int main()
{
    char alphabet;
    printf("Enter a alphabet : ");
    scanf("%c", &alphabet);

    switch (alphabet)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Vowel\n");
        break;
    default:
        printf("Consonant\n");
        break;
    }
}