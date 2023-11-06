#include <stdio.h>
#include <string.h>
void main()
{
    char names[50][100], x[100];
    int m, t;
    printf("Enter number of names : ");
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        printf("Enter name%d : ", i + 1);
        scanf(" "); // buffer cancellation
        gets(names[i]);
    }
    printf("\n");
    for (int i = 1; i < m; i++)
    {
        for (int j = 0; j < m - i; j++)
        {
            if (strcmp(names[j], names[j + 1]) > 0)
            {
                strcpy(x, names[j + 1]);
                strcpy(names[j + 1], names[j]);
                strcpy(names[j], x);
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        puts(names[i]);
    }
}