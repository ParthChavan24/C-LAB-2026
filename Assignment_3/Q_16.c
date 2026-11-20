#include <stdio.h>

int main()
{
    char s1[100], s2[100];
    int i = 0, flag = 0;

    printf("Enter String 1: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter String 2: ");
    fgets(s2, sizeof(s2), stdin);

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 0 && s1[i] == s2[i])
    {
        printf("Both Strings Are Equal");
    }
    else
    {
        printf("Both Strings Are Not Equal");
    }

    return 0;
}
