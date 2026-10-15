#include <stdio.h>
int main()
{ 
float fahrenheit,centigrade;
printf("Enter Temperature in Fahrenheit:");
scanf("%f",&fahrenheit);
centigrade=((fahrenheit-32.0)*5.0)/9.0; 
printf("Temperature in Centigrade:%f",centigrade);
}
