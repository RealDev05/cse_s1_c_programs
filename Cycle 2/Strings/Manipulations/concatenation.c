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
        if (str1[i] == '\0' && pos == -1)
        {
            pos = i;
        }
        if (pos != -1)
        {
            str1[i] = str2[i - pos];
            if (str1[i - pos] == '\0')
            {
                break;
            }
        }
    }

    printf("Result is : ");
    puts(str1);
}