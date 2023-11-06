#include <stdio.h>

void fibonacci(int i, int a, int b)
{
    int t;
    if (i-- > 0)
    {
        t = b;
        b += a;
        a = t;
        printf("%d ", b);
        return fibonacci(i, a, b);
    }
}

void main()
{
    int n, a = -1, b = 1;
    printf("Enter length : ");
    scanf("%d", &n);
    fibonacci(n, a, b);
}