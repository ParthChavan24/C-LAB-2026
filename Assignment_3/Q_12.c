#include <stdio.h>

void stringLength(void) 
{
    char s[200];
    int len = 0;

    printf("Enter a line of text: ");
    fgets(s, sizeof(s), stdin);

    while (s[len] != '\0' && s[len] != '\n') 
    {
        len++;
    }

    printf("Length of the string = %d\n", len);
}

int main()
{
    stringLength();
    return 0;
}
