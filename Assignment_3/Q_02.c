#include <stdio.h>
int palindrome(int n)
{
	int original=n,rev=0,q=0;
	while(n!=0)
	{
	q=n%10;
	rev=rev*10+q;
	n=n/10;
	}
	if(original==rev)
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
		printf("%d Is Palindrome.",n);
	}
	else if(palindrome(n))
	{
		printf("%d is Palindrome.",n);
	}
	else
	{
		printf("%d is not a Palindrome.",n);
	}
	printf("\n\n");
}
}
