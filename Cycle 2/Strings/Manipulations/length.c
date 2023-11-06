#include <stdio.h>
void main()
{
    char str1[50];
    int len = 0;
    printf("Enter string : ");
    gets(str1);

    for (len = 0; len < 50; len++)
    {
        if (str1[len] == '\0')
        {
            break;
        }
    }
    printf("Length of string is %d\n", len);
}