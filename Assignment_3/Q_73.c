#include <stdio.h>

int main() 
{
    char s[200],c[200];
    int len = 0;

    printf("Enter String 1: ");
    fgets(s, sizeof(s), stdin);

    while (s[len] != '\0' && s[len] != '\n') 
    {
        len++;
    }
    
    int i=0;
    while (i<=len) 
    {
    	c[i]=s[i];
        i++;
    }
    
    printf("String 2 copied from string 1:");
    puts(c);
}
