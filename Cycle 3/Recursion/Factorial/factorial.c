#include <stdio.h>

int factorial(int x)
{
    if (x == 0)
    {
        return 1;
    }
    return x * factorial(x - 1);
}

void main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Factorial doesn't exist for %d", n);
    }
    else
    {
        printf("%d! = %d", n, factorial(n));
    }
}