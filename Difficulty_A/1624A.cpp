// problem: 1624A
// title: Plus One on the Subset

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, max = INT_MIN, min = INT_MAX, x = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (min > x)
                min = x;
            if (max < x)
                max = x;
        }
        cout << max - min << endl;
    }

    return 0;
}