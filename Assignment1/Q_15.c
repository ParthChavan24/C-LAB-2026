#include <stdio.h>
int main()
{
int a, b, c, d, e;
float per;
printf("Enter marks of five subjects: ");
scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
per = (a + b + c + d + e) / 5.0;
printf("Percentage = %.2f\n", per);
if(per >= 80)
printf("First Division");
else if(per >= 60)
printf("Second Division");
else if(per >= 40)
printf("Third Division");
else
printf("Fail");
return 0;
}
