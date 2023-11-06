#include <stdio.h>
void main()
{
    int u, l, count;
    printf("Enter lowe and upper limits : ");
    scanf("%d%d", &l, &u);
    printf("Prime numbers are :\n");
    for (int i = l; i <= u; i++)
    {
        count = 0;
        for (int j = 1; j <= (i / 2); j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count < 2)
        {
            printf("%d\n", i);
        }
    }
    printf("\n");
}