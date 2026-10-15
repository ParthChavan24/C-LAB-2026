#include<stdio.h>
int main()
{
    int a[10], n, i, posi=0, neg=0, zero=0;

    printf("Enter the size of array : ");
    scanf("%d", &n);

    printf("Enter the elements of array : ");

    for(i=0;i<n;i++)
    {
        printf("Enter the a[%d] element",i);
        scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            posi++;
        }
        if(a[i]<0)
        {
            neg++;
        }
        if(a[i]==0)
        {
            zero++;
        }
    }

    printf("Total number of positive elements = %d\n", posi);
    printf("Total number of negative elements = %d\n", neg);
    printf("Total number of zero elements = %d", zero);
}
