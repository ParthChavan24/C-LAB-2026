#include <stdio.h>
int main()
{
int n, i;
double fact = 1, sum = 0;
scanf("%d", &n);
for(i = 1; i <= n; i++)
{
fact *= i;
sum += i / fact;
}
printf("Sum = %.6f", sum);
return 0;
}
