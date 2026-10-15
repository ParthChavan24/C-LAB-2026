#include <stdio.h>
int main()
{
int a, b;
char ch;
printf("Enter two numbers: ");
scanf("%d%d", &a, &b);
printf("Enter operator (+, -, *, /, %%): ");
scanf(" %c", &ch);
switch(ch)
{
case '+': printf("Sum = %d", a + b); break;
case '-': printf("Difference = %d", a - b); break;
case '*': printf("Product = %d", a * b); break;
case '/':if(b != 0)
         printf("Quotient = %d", a / b);
         else
         printf("Cannot divide by zero");
         break;
case '%':if(b != 0)
         printf("Remainder = %d", a % b);
         else
         printf("Cannot calculate remainder");
         break;
default: printf("Invalid operator");
}
return 0;
}
