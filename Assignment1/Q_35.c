#include <stdio.h>
int main()
{
int n, sum;
scanf("%d", &n);
if(n < 0) 
n = -n;
while(n >= 10)
{
sum = 0;
while(n > 0)
{
sum += n % 10;
n /= 10;
}
n = sum;
}
printf("Single digit = %d", n);
return 0;
}
