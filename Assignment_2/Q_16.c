#include<stdio.h>
int main()
{
	int a[101],i,j,n,temp=0;
	printf("Enter The Size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter element %d:",i+1);
		scanf("%d",&a[i]);
	}
	printf("Before Reversing Array Elements:");
	for(j=0;j<n;j++)
	printf("%d\t",a[j]);
    for(i=1;i<n;i++)
    {
    	temp=a[i-1];
    	a[i-1]=a[n-i];
    	a[n-i]=temp;
    	if(i==n/2)
    	break;
    }
	printf("\nAfter Reversing Array Elements:");
	for(j=0;j<n;j++)
	printf("%d\t",a[j]);
}
