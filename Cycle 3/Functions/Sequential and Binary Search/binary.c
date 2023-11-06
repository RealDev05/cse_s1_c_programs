#include <stdio.h>

int binarySearch(int arr[], int size, int key)
{
    int t, f = 0, m = size - 1;

    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                t = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = t;
            }
        }
    }

    while (f <= m)
    {
        t = (m + f) / 2;
        if (arr[t] > key)
        {
            m = t - 1;
        }
        else if (arr[t] < key)
        {
            f = t + 1;
        }
        else
        {
            return t;
        }
    }
    return -1;
}

void main()
{
    int arr[50], m, num, index;
    printf("Enter number of elements : ");
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        printf("Enter value%d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter number to find : ");
    scanf("%d", &num);

    index = binarySearch(arr, m, num);
    printf("\n");
    if (index != -1)
    {
        printf("%d is found in the sorted array at index %d", num, index);
    }
    else
    {
        printf("%d id not in the array", num);
    }
    printf("\n");
}