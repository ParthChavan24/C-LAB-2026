#include<stdio.h>
int main()
{
    int a[10],b[10],sum[10];
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
            sum[i]=a[i] + b[i];
        }
    printf("\n Sum Of Two Array Elements:");
    for(int i=0;i<10;i++)
        {
            printf("%d\t",sum[i]);
        }
return 0;    
}
