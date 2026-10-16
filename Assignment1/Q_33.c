#include <stdio.h>
int main()
{
int n, i, num, max, min;
printf("Enter how many numbers: ");
scanf("%d", &n);
printf("Enter number 1: ");
scanf("%d", &num);
max = min = num;
for (i = 2; i <= n; i++) {
printf("Enter number %d: ", i);
scanf("%d", &num);
if (num > max)
max = num;
if (num < min)
min = num;
}
printf("Maximum number = %d\n", max);
printf("Minimum number = %d\n", min);
return 0;
}
