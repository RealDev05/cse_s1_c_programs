#include <stdio.h>
void main()
{
    char str1[50], str2[50];
    int val = -1;
    printf("Enter string1 : ");
    gets(str1);
    printf("Enter string2 : ");
    gets(str2);

    for (int i = 0; i < 50; i++)
    {
        if (str1[i] == '\0' && str2[i] == '\0')
        {
            break;
        }
        if (str1[i] > str2[i])
        {
            val = 1;
        }
        else if (str1[i] < str2[i])
        {
            val = -1;
        }
        else
        {
            val = 0;
            continue;
        }
        break;
    }

    switch (val)
    {
    case 1:
        printf("String1 is larger in terms of ascci code");
        break;
    case -1:
        printf("String2 is larger in terms of ascci code");
        break;
    case 0:
        printf("Both strings are equal");
        break;
    }
}