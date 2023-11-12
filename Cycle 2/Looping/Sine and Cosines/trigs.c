#include <stdio.h>

float power(float x, int y)
{
    float ret = 1;
    for (int i = 0; i < y; i++)
    {
        ret *= x;
    }
    return ret;
}
int fact(int x)
{
    if (x == 0)
    {
        return 1;
    }
    return x * fact(x - 1);
}

void main()
{
    float angle, angle2, cos = 0, sin;
    int neg = 1, sneg = 1, cneg = 1;

    printf("Enter the angle : ");
    scanf("%f", &angle);

    if (angle < 0)
    {
        angle = -angle;
        neg = -1;
    }

    angle -= (((int)angle) / 360) * 360;

    if (angle > 270)
    {
        angle2 = angle - 270;
        sneg = -1;
    }
    else if (angle > 180)
    {
        angle2 = angle - 180;
        cneg = -1;
        sneg = -1;
    }
    else if (angle > 90)
    {
        angle2 = angle - 90;
        cneg = -1;
    }
    else
    {
        angle2 = angle;
    }

    angle2 *= 3.14 / 180;

    for (int i = 0; i < 10; i++)
    {
        cos += power(angle2, 2 * i) * power(-1, i) / fact(2 * i);
        sin += power(angle2, 2 * i + 1) * power(-1, i) / fact(2 * i + 1);
    }

    sin *= neg * sneg;
    cos *= cneg;

    printf("cos = %.3f \nsin = %.3f", cos, sin);
}