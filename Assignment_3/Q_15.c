#include <stdio.h>

int main() 
{
    char s1[200],s2[200],s3[200];
    int i=0,j=0;

    printf("Enter String 1: ");
    fgets(s1, sizeof(s1), stdin);
    
    printf("Enter String 2: ");
    fgets(s2, sizeof(s2), stdin);
    
    while (s1[i]!='\0' && s1[i]!='\n') 
    {
    	s3[j]=s1[i];
    	i++;
    	j++;
    }
    s3[j]=' ';
    i=0;
    j=j+1;
    while (s2[i]!='\0' && s2[i]!='\n')
    {
        s3[j]=s2[i];
        i++;
        j++;
    }
    s3[j] ='\0';
    
    printf("String 1 And String 2 CONCATED Into String 3:");
    puts(s3);
}
