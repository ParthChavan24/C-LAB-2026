#include <stdio.h>

int main()
{
	char s[200];
	int len=0;
	
	printf("Enter A String:");
	fgets(s, sizeof(s), stdin);
	
	
    while (s[len] != '\0' && s[len] != '\n') 
    {
        len++;
    }

    printf("Length of the string =%d\n",len);
}
