// problem: 71A
// title: Way Too Long Words

#include <stdio.h>
#include<string.h>
void main()
{
    int n, i, m;
    char x[600];
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%s", &x);
        int l = strlen(x);

        if (l > 10)
        {
            printf("%c", x[0]);     //Print 1'st character
            printf("%d", l - 2);     //Print number between two character 
            printf("%c\n", x[l - 1]);     //Print last character
        }
        else
            printf("%s\n", x);
    }
}
