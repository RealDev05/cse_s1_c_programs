#include <stdio.h>
#include <math.h>
void main()
{
    float a, b, c, d, r1, r2;
    printf("For a quadratic equation ax^2+bx+c=0, Enter a,b,c : ");
    scanf("%f%f%f", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d == 0)
    {
        r1 = -b / (2 * a);
        printf("Root of equation is %f", r1);
    }
    else if (d > 0)
    {
        d = sqrt(d);
        r1 = (-b + d) / (2 * a);
        r2 = (-b - d) / (2 * a);
        printf("Roots of equation are %f and %f", r1, r2);
    }
    else
    {
        d = sqrt(-d);
        r1 = d / (2 * a);
        b = -b / (2 * a);
        printf("Roots of the equation are %f+%fi and %f-%fi", b, r1, b, r1);
    }
    printf("\n");
}