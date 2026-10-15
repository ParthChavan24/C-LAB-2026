#include <stdio.h>
#include <math.h>
int main() 
{ 
double a,b,c,s,area;
printf("Enter The Value Of First Side:",a);
scanf("%lf",&a);
printf("Enter The Value Of Second Side:",b);
scanf("%lf",&b);
printf("Enter The Value Of Third Side:",c);
scanf("%lf",&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("Area Of The Triangle Is:%lf\n",area);
}
