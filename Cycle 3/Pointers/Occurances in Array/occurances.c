#include <stdio.h>
void main()
{
    int m, num, arr[50], count = 0, *pointer;
    pointer = &arr[0];

    printf("Enter number of elements : ");
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        printf("Enter value%d : ", i + 1);
        scanf("%d", pointer + i);
    }
    printf("Enter number to count : ");
    scanf("%d", &num);
    for (int i = 0; i < m; i++)
    {
        if ((*(pointer + i)) == num)
        {
            count++;
        }
    }
    printf("\n There are %d occurances of %d in the array\n\n", count, num);
}