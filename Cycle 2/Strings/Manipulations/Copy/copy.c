#include <stdio.h>
void main()
{
    char str1[50], str2[50];
    int pos = -1;
    printf("Enter string1 : ");
    gets(str1);
    printf("Enter string2 : ");
    gets(str2);

    for (int i = 0; i < 50; i++)
    {
        str1[i] = str2[i];
        if (str2[i] == '\0')
        {
            break;
        }
    }

    printf("Now string1 is : ");
    puts(str1);
}