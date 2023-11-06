#include <stdio.h>
void main()
{
    int r, val[100], v[100];
    val[0] = 1;
    val[1] = 1;
    printf("Enter number of rows : ");
    scanf("%d", &r);
    for (int i = 1; i <= r; i++)
    {
        for (int l = 0; l < (r - i); l++)
        {
            printf("   ");
        }
        val[i - 1] = 1;
        for (int j = 1; j < i; j++)
        {
            v[j] = val[j - 1] + val[j];
            printf("%6d", v[j]);
        }
        printf("%6d\n", 1);
        for (int k = 0; k <= i; k++)
        {
            val[k] = v[k];
        }
    }
}