#include <stdio.h>
void main()
{
    int n, sum = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    printf("\nSum of digits is %d\n\n", sum);
}