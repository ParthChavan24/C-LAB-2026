#include <stdio.h>
int main()
{
float x, y;
int n;
printf("Enter x and n: ");
scanf("%f%d", &x, &n);
if(n == 1)
y = 1 + x;
else if(n == 2)
y = 1 + x / n;
else if(n == 3)
y = 1 + x * n;
else
y = 1 + n * x;
printf("Y = %.2f", y);
return 0;
}
