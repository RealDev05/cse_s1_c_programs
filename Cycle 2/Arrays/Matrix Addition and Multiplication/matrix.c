#include <stdio.h>
void main()
{
    int arr1[50][50], arr2[50][50], arr3[50][50], m1, m2, n1, n2;
    printf("Enter number of columns and rows of matrix1 : ");
    scanf("%d%d", &m1, &n1);
    printf("Enter number of columns and rows of matrix2 : ");
    scanf("%d%d", &m2, &n2);
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            printf("Enter matrix1(%d,%d) : ", i + 1, j + 1);
            scanf("%d", &arr1[i][j]);
        }
    }
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("Enter matrix2(%d,%d) : ", i + 1, j + 1);
            scanf("%d", &arr2[i][j]);
        }
    }
    if (m1 == m2 && n1 == n2)
    {
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                arr3[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
        printf("\n\nMatrix1 + Matrix2 : \n");
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                printf("%d ", arr3[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nMatrix1 and Matrix2 have different dimensions, ie can't perform addition");
    }
    if (n1 == m2)
    {
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                arr3[i][j] = 0;
                for (int k = 0; k < m2; k++)
                {
                    arr3[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        printf("\n\nMatrix1 * Matrix2 : \n");
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                printf("%d ", arr3[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    else
    {
        printf("\nn1 not equal to m2, ie can't perform multiplication");
    }
}