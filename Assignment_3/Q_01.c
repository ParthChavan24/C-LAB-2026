#include <stdio.h>
int iseven(int n)
{
	if(n%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{   int n;
	printf("Enter number:");
	scanf("%d",&n);
	if(iseven(n))
	{
		printf("%d is even Number.",n);
	}
	else
	{
		printf("%d is odd number.",n);
	}
}
