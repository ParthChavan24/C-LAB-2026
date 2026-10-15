#include <stdio.h>
int main()
{
int base, exp, i;
long long result = 1;
printf("Enter base and exponent: ");
scanf("%d%d", &base, &exp);
if(exp < 0)
{
printf("Use a non-negative exponent");
}
for(i = 1; i <= exp; i++)
result = result * base;
printf("Power = %lld", result);
return 0;
}
