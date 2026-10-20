#include <stdio.h>

int main() {
    int a[100], n, i, element, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to count: ");
    scanf("%d", &element);

    for (i = 0; i < n; i++) {
        if (a[i] == element)
            count++;
    }

    printf("%d occurs %d time(s) in the array.", element, count);

    return 0;
}
