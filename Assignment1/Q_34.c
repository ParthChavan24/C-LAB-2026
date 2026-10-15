#include <stdio.h>
int main()
{
int n, i;
long long a = 0, b = 1, c;
printf("Enter number of terms: ");
scanf("%d", &n);
for(i = 1; i <= n; i++)
{
printf("%lld ", a);
c = a + b;
a = b;
b = c;
}
return 0;
}
