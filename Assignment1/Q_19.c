#include <stdio.h>
int main()
{
char ch;
scanf("%c", &ch);
(ch >= 'a' && ch <= 'z') ? printf("Small case letter"):printf("Not a small case letter");
return 0;
}
