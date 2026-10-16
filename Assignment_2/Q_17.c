#include <stdio.h>
int main()
{
	int a[3][3],i,j,max,min;
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
	max=min=a[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]>max)
			{
			max=a[i][j];
		    }
		    else if(a[i][j]<min)
		    {
		    min=a[i][j];
			}
		}
	}
	printf("Max Element is :%d\n",max);
	printf("Min Element is :%d",min);
}
