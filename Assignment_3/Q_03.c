#include <stdio.h>
int armstrong(int n)
{
	int original=n,count=0,power,digit=0,temp=0,sum=0;
    temp = n;
    do
    {
    count++;
    temp /= 10;
    } while(temp != 0);
    temp = n;
    do
    {
    digit = temp % 10;
    power = 1;
    for(int i = 1; i <= count; i++)
    power *= digit;
    sum += power;
    temp /= 10;
    } while(temp != 0);
	if(original==sum)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{   while(1)
    {
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n<1)
	{
		printf("Enter Valid number.");
	}
	else if(n<10)
	{
		printf("%d Is Armstrong Number.",n);
	}
	else if(armstrong(n))
	{
		printf("%d is Armstrong number.",n);
	}
	else
	{
		printf("%d is not a Armstrong Number.",n);
	}
	printf("\n\n");
}
}
