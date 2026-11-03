#include <stdio.h>

void checkVowel(void) 
{
    char c, lower;
    printf("Enter a character: ");
    scanf(" %c", &c);

    lower = c;
    if (c >= 'A' && c <= 'Z')
        lower = c + 32;

    switch (lower) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("'%c' is a vowel.\n", c);
            break;
        default:
            printf("'%c' is not a vowel.\n", c);
    }
}

int main(void) 
{
    checkVowel();
    return 0;
}
