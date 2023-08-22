#include <stdio.h>
void main()
{
    int n;
    scanf("%d", &n);
    int arr[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i][2] % 2 == 0)
        {
            if (arr[i][0] > arr[i][1])
                printf("First\n");
            else
                printf("Second\n");
        }
        else
        {
            if (arr[i][1] > arr[i][0])
                printf("Second\n");
            else
                printf("First\n");
        }
    }
}