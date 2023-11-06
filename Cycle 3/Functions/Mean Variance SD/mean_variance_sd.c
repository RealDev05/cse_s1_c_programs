#include <stdio.h>
#include <math.h>
float mean(float arr[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;
}
float variance(float arr[], int size, float mean)
{
    float variance = 0, diff;
    for (int i = 0; i < size; i++)
    {
        diff = arr[i] - mean;
        variance += diff * diff;
    }
    return variance / (size - 1);
}
float standardDeviation(float variance)
{
    return sqrt(variance);
}
void main()
{
    float arr[50], mMean, mVariance, mSD;
    int m;
    printf("Enter number of elements : ");
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        printf("Enter value%d : ", i + 1);
        scanf("%f", &arr[i]);
    }
    mMean = mean(arr, m);
    mVariance = variance(arr, m, mMean);
    mSD = standardDeviation(mVariance);
    printf("\nMean = %f\nVarinace = %f\nStandard Deviation = %f\n", mMean, mVariance, mSD);
}