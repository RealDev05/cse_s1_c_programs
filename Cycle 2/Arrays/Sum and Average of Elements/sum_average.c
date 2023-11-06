#include <stdio.h>
void main()
{
    float arr[50], sum = 0;
    int m;
    printf("Enter number of elements : ");
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        printf("Enter value%d : ", i + 1);
        scanf("%f", &arr[i]);
    }
    for (int i = 0; i < m; i++)
    {
        sum += arr[i];
    }
    printf("Sum of elements is %f and average is %f\n", sum, sum / m);
}