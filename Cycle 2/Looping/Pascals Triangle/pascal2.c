#include <stdio.h>
void main()
{
    int c, r;
    printf("Enter number of rows : ");
    scanf("%d", &r);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r - i; j++)
        {
            printf("   ");
        }
        printf("%6d", 1);
        c = 1;
        for (int j = 0; j < i; j++)
        {
            c = c * (i - j) / (j + 1);
            printf("%6d", c);
        }
        printf("\n");
    }
}