#include <stdio.h>

int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return i;
        }
    }
    return -1;
}
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

int main()
{
    int pos = -1, op, array[50], key, n;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter value %d : ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Enter number to find : ");
    scanf("%d", &key);

    printf("Binary Search (0) or Linear Search (1) : ");
    scanf("%d", op);
    pos = op == 0 ? binarySearch(array, n, key) : linearSearch(array, n, key);

    if (pos != -1)
    {
        printf("%d was found at index %d", key, pos);
    }
    else
    {
        printf("%d was not found", key);
    }
    return 0;
}