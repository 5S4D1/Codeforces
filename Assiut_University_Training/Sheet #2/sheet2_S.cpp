// sheet #2
// problem: S
// title: Sum of Consecutive Odd Numbers

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x, y;
    while (cin >> x >> y && n > 0)
    {
        if (x > y)
            swap(x, y);
        int sum = 0;

        for (int i = x + 1; i < y; i++)
        {
            if (i % 2 != 0) // Check number is odd or not
            {
                sum += i;
            }
        }
        cout << sum << endl;

        n--;
    }

    return 0;
}