#include <stdio.h>
void main()
{
    int cnum;
    double units, total;
    printf("Enter consumer number : ");
    scanf("%d", &cnum);
    printf("Enter units of electricity consumed : ");
    scanf("%lf", &units);
    if (units <= 200)
    {
        total = units * 0.5;
    }
    else if (units <= 400)
    {
        total = 100 + (units - 200) * 0.65;
    }
    else if (units <= 600)
    {
        total = 230 + (units - 400) * 0.8;
    }
    else
    {
        total = 390 + (units - 600);
    }
    printf("\n\nElectricity Bill:\nConsumer No.: %d\nUnits Consumed : %lf\nAmount to be paid : %lf\n\n", cnum, units, total);
}