#include <stdio.h>
#include <string.h>
void main()
{
    int n, i;
    char str[100];
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        printf("input\n");
        gets(str);
        if (strlen(str) > 10)
            printf("%c%d%c\n", str[0], strlen(str) - 2, str[strlen(str) - 1]);
        else
            printf("%s\n", str);
    }
}
