// sheet #2
// problem: Y
// title: Easy Fibonacci

#include <stdio.h>
int main()
{
    int a = 0;
    int b = 1;
    int n;
    
    scanf("%d", &n);
    printf("0 ");

    if (n > 1)
        printf("1 ");
    for (int i = 2; i < n; i++)
    {
        int c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}