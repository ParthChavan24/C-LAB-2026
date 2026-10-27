#include <stdio.h>

int main() {
    int a[100], n, i, search, position = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &search);

for (i = 0; i < n; i++) {
    if (a[i] == search) {
        position = i;
        break;
    }
}

if (position >= 0)
    printf("Element found at position %d.", position + 1);
else
    printf("Element not found.");
    return 0;
}
