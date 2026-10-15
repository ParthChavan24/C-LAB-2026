#include <stdio.h>
int main()
{
int basic_salary,bonus,overtime,Gross_Salary;
printf("Enter your Basic salary:");
scanf("%d",&basic_salary);
printf("Enter your bonus:");
scanf("%d",&bonus);
printf("Enter your overtime:");
scanf("%d",&overtime);
Gross_Salary=(basic_salary+bonus+overtime); 
printf("Your gross salary is:%d",Gross_Salary);
}
