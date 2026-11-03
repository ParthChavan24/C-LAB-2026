#include <stdio.h>
void findMax(void) 
{
    int a[100], n, i, max;
    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        {
        scanf("%d", &a[i]);
        }
    max = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
    }
    printf("Maximum element = %d\n", max);
}

int main() 
{
    findMax();
    return 0;
}
