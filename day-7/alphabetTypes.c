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

    if (alphabet == 'a' ||
        alphabet == 'e' ||
        alphabet == 'i' ||
        alphabet == 'o' ||
        alphabet == 'u' ||
        alphabet == 'A' ||
        alphabet == 'E' ||
        alphabet == 'I' ||
        alphabet == 'O' ||
        alphabet == 'U')
    {
        printf("--Vowel\n");
    }
    else
    {
        printf("--Consonants\n");
    }
}