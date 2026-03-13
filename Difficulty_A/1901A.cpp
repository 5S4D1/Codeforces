// problem: 1901A
// title: Line Trip

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
        int n, x;
        cin >> n >> x;
        vector<int> a(n + 2);
        a[0] = 0;
        for (int i = 1; i <= n; ++i)
            cin >> a[i];

        a[n + 1] = x;

        // maximum distance is equal to minimum gas tank volume
        int max_dist = 0;
        for (int i = 0; i <= n; ++i)
        {
            int dist = abs(a[i + 1] - a[i]);
            if (i + 1 == n + 1)
                dist = 2 * abs(x - a[i]);

            max_dist = max(max_dist, dist);
        }
        cout << max_dist << endl;
    }

    return 0;
}