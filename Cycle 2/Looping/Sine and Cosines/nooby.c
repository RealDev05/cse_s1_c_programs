#include <stdio.h>
void main()
{
    // rather die than using this

    float angle, cos, sin;
    printf("Enter angle : ");
    scanf("%f", &angle);

    angle *= 3.14 / 180;

    cos = 1 - angle * angle / 2;
    sin = angle - angle * angle * angle / 6;

    printf("cos = %.3f \nsin = %.3f", cos, sin);
}