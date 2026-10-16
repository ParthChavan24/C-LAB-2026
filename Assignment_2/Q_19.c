#include <stdio.h>
int main()
{
	int a[3][3],i,j,temp=0;
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
    for(i = 0; i < 3; i++)
    { 
        for(j = i + 1; j < 3; j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
	printf("\n Transpose Of Matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
