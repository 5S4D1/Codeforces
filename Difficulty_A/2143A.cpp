// problem: 2143A
// title: All Lengths Subtraction

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
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        bool ok = true;
        // rem = how many more +1 we need at each position in reverse process
        vector<int> rem = a;

        for (int k = n; k >= 1 && ok; --k)
        {
            // find index pos with rem[pos] == k
            int pos = -1;
            for (int i = 0; i < n; ++i)
                if (rem[i] == k)
                {
                    pos = i;
                    break;
                }
            if (pos == -1)
            {
                ok = false;
                break;
            }

            bool placed = false;
            // possible l range so that segment [l, l+k-1] includes pos and fits
            int lmin = max(0, pos - (k - 1));
            int lmax = min(pos, n - k);
            for (int l = lmin; l <= lmax; ++l)
            {
                bool can = true;
                for (int j = l; j < l + k; ++j)
                    if (rem[j] < 1)
                    {
                        can = false;
                        break;
                    }
                if (can)
                {
                    for (int j = l; j < l + k; ++j)
                        rem[j] -= 1;
                    placed = true;
                    break;
                }
            }
            if (!placed)
                ok = false;
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
