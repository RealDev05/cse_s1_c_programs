#include <stdio.h>
void main()
{
    int arr[50], m, num, t;
    printf("Enter number of elements : ");
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        printf("Enter value%d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < m; i++)
    {
        for (int j = 0; j < m - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                t = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = t;
            }
        }
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}