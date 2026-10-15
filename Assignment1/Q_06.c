#include <stdio.h>
int main() 
{
    int a,b; 
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:",b);  
    scanf("%d",&b); 
    printf("Before Swapping: a=%d, b=%d\n",a,b);
    a=a+b; 
    b=a-b; 
    a=a-b; 
    printf("After Swapping: a=%d, b=%d\n",a,b);
}
