#include <stdio.h>

int main()
{
    char s[100],rs[100];
    int i=0,j=0;

    printf("Enter String:");
    fgets(s, sizeof(s), stdin);
    
    while(s[i]!='\0')
   {i++;}
   while(i!=0)
   {
   	rs[j]=s[i-1];
   	j++;
   	i--;
   }
   rs[j]='\0';
   
   printf("Reverse String:");
   puts(rs);
}
