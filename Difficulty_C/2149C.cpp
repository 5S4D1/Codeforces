// problem: 2149C
// title: MEX rose

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
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        vector<int> freq(n + 1, 0);
        for (int x : a)
        {
            if (0 <= x && x <= n)
                freq[x]++;
        }

        int missing = 0;
        for (int i = 0; i < k; ++i)
        {
            if (freq[i] == 0)
                missing++;
        }
        int cntk = freq[k];

        cout << max(missing, cntk) << '\n';
    }

    return 0;
}