#include <stdio.h>
long long factorial(int n) 
{
    long long f = 1;
    int i;
    for (i = 2; i <= n; i++)
        f *= i;
    return f;
}

long long nCr(int n, int r) 
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() 
{
    int n, r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    if (r < 0 || r > n ) 
    {
        printf("Invalid input (need 0 <= r <= n )\n");
    }
    else
    {
    printf("%dC%d = %lld\n", n, r, nCr(n, r));
    }
    return 0;
}
