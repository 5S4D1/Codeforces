// problem: 4A
// title: Watermelon

#include<stdio.h>
int main()
{
    int w;
    printf("Watermelon weighed: ");
    scanf("%d",&w);
    if (w % 2 == 0 && w > 2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
/*
#include <iostream>
using namespace std;
int main()
{
    int w;
    cin >> w;
    if (w % 2 == 0 && w > 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}*/