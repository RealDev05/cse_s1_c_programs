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

    index = linearSearch(arr, m, num);
    printf("\n");
    if (index != -1)
    {
        printf("%d is found in the array at index %d", num, index);
    }
    else
    {
        printf("%d is not in the array", num);
    }
    printf("\n");
}