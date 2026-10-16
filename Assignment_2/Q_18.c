#include <stdio.h>
int main()
{
	int a[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a[%d][%d] element:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nMatrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{   int sum=0;
		for(j=0;j<3;j++)
		{
			sum+=a[i][j];
		}
		printf("Sum of elements in Row %d:%d\n",i+1,sum);
	}
}
