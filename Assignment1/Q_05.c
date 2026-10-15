#include <stdio.h>
int main() 
{
    int a,b,c; 
    printf("Enter value of a:",a); 
    scanf("%d",&a);
    printf("Enter value of b:",b); 
    scanf("%d",&b);  
    printf("Before Swapping: a=%d, b=%d\n",a,b);
    c = a; 
    a = b; 
    b = c; 
    printf("After Swapping: a=%d, b=%d\n",a,b);
}
