// problem: 1850D
// title: Balanced Round

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());
        long size = 0, max = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] + k >= a[i + 1])
            {
                size++;
                max = (max < size) ? size : max;
                // cout << "size: " << size << " max: " << max << "\n";
            }

            else
                size = 0;
        }
        cout << n - max - 1 << "\n";
    }

    return 0;
}