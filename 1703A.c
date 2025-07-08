// name: YES or YES?
// problem: 1703A

#include <stdio.h>
#include <string.h>

int main()  // in codeforces mustbe use int in main function
{
    int n, i = 0;
    char s[4];

    scanf("%d", &n);

    while (i < n)
    {
        scanf("%s", s);

        int result = 0;

        if (s[0] == 'Y' || s[0] == 'y')
        {
            result++;
        }
        if (s[1] == 'E' || s[1] == 'e')
        {
            result++;
        }
        if (s[2] == 'S' || s[2] == 's')
        {
            result++;
        }

        if (result == 3)
            printf("YES\n");
        else
            printf("NO\n");

        i++;
    }
    return 0;
}
