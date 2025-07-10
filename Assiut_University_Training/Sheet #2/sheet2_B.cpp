// sheet #2
// problem: B
// title: Even Numbers

#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a < 2)
    {
        printf("-1\n");
        return 0;
    }
    for (int i = 2; i <= a; i++)
    {
        if (i % 2 == 0)
            printf("%d\n", i);
    }
    
    return 0;
}