#include <stdio.h>

void fibonacci(int i)
{
    static int a = -1, b = 1, t;
    if (i-- > 0)
    {
        t = b;
        b += a;
        a = t;
        printf("%d ", b);
        return fibonacci(i);
    }
}

void main()
{
    int n;
    printf("Enter length : ");
    scanf("%d", &n);
    fibonacci(n);
}