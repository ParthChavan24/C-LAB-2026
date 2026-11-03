#include <stdio.h>
int fibonacci(int n) 
{
    long long a = 0, b = 1, c;
    int i;
    for (i = 1; i <= n; i++) {
        printf("%lld ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

int main() 
{
    int n;
    printf("N:");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
