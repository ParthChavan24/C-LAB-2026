#include <stdio.h>
int main()
{
int n, i, even = 0, odd = 0;
scanf("%d", &n);
for(i = 1; i <= n; i++)
{
if(i % 2 == 0)
even += i;
else
odd += i;
}
printf("Sum of even numbers = %d\n", even);
printf("Sum of odd numbers = %d", odd);
return 0;
}
