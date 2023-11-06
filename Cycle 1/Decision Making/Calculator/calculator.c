#include <stdio.h>
void main()
{
    float a, b;
    char op, mod = '%';
    printf("Enter which opertaion to do (+,-,*,/,%c) : ", mod);
    scanf("%c", &op);
    printf("Enter value1 : ");
    scanf("%f", &a);
    printf("Enter value2 : ");
    scanf("%f", &b);
    printf("\n\n%f %c %f = ", a, op, b);
    switch (op)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '/':
        if (b == 0)
        {
            printf("infinity");
        }
        else
        {
            printf("%d", a / b);
        }
        break;
    case '%':
        printf("%d", ((int)b == 0 ? (int)a : (int)a % (int)b));
        break;
    }
    printf("\n\n");
}