#include<stdio.h>
int main()
{
    int a[10],b[10],temp;
    for(int i=0;i<10;i++)
        {
            printf("Enter a[%d] element:",i);
            scanf("%d",&a[i]);
        }
    printf("\n1st Array Elements:");
    for(int i=0;i<10;i++)
        {
            printf("%d\t",a[i]);
        }
    printf("\n");
    for(int i=0;i<10;i++)
        {
            printf("Enter b[%d] element:",i);
            scanf("%d",&b[i]);
        }
    printf("\n2nd Array Elements:");
    for(int i=0;i<10;i++)
        {
            printf("%d\t",b[i]);
        }
    for(int i=0;i<10;i++)
        {
            temp=a[i];
            a[i]=b[i];
            b[i]=temp;
        }
    printf("\nAfter Swapping Array Elements:");
    printf("\n1st Array Elements:");
    for(int i=0;i<10;i++)
        {
            printf("%d\t",a[i]);
        }
    printf("\n2nd Array Elements:");
    for(int i=0;i<10;i++)
        {
            printf("%d\t",b[i]);
        }
return 0;    
}
