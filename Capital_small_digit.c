#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    if (ch >= 48 && ch <= 57)
    {
        printf("IS DIGIT\n");
    }
    else
    {
        printf("ALPHA\n");
        if (ch >= 65 && ch <= 90)
        {
            printf("IS CAPITAL\n");
        }
        else if (ch >= 97 && ch <= 122)
        {
            printf("IS SMALL\n");
        }
    }

    return 0;
}