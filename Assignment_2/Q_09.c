#include<stdio.h>
int main()
{
    int a[10], n, i, even=0, odd=0;

    printf("Enter the size of array : ");
    scanf("%d", &n);

    printf("Enter the array elements : ");
    
    for(i=0;i<n;i++)
    {
        printf("Enter the a[i] element",i);
        scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else if(a[i]%2!=0)
        {
            odd++;
        }
    }
    printf("Total even numbers in array = %d", even);
    printf("\n");
    printf("Total odd numbers in array = %d", odd);
}
