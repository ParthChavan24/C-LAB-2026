#include <stdio.h>
int main()
{
int n, temp, digit, rev = 0;
scanf("%d", &n);
if(n < 0)
{
printf("Not a palindrome");
}
temp = n;
while(temp > 0)
{
digit = temp % 10;
rev = rev * 10 + digit;
temp /= 10;
}
if(n == rev)
printf("Palindrome number");
else
printf("Not a palindrome");
return 0;
}
