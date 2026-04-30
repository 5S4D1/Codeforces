// problem: 2227E
// title: It All Went Sideways
// using @chatgpt

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);

        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        vector<long long> suf(n);

        suf[n - 1] = a[n - 1];

        for (int i = n - 2; i >= 0; i--)
            suf[i] = min(a[i], suf[i + 1]);

        long long stationary = 0;

        for (int i = 0; i < n; i++)
            stationary += suf[i];

        // contribution length for each suffix minimum block
        long long bestReduce = 0;

        int i = 0;

        while (i < n)
        {
            int j = i;

            while (j + 1 < n && suf[j + 1] == suf[i])
                j++;

            // decreasing this minimum reduces all these positions
            if (suf[i] > 0)
                bestReduce = max(bestReduce, (long long)(j - i + 1));

            i = j + 1;
        }

        long long ans = sum - stationary;

        // after removing one cube
        ans = max(ans, (sum - 1) - (stationary - bestReduce));

        cout << ans << '\n';
    }

    return 0;
}