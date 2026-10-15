#include <stdio.h>
int main()
{
int n, i, prime = 1;
scanf("%d", &n);
if(n <= 1)
{
printf("Neither prime nor composite");
}
for(i = 2; i <= n / i; i++)
{
if(n % i == 0)
{
prime = 0;
break;
}
}
if(prime)
printf("Prime number");
else
printf("Composite number");
return 0;
}
