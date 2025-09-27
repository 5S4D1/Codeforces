// problem: 2149B
// title: Unconventional Pairs

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        long long ans = 0;
        cin >> n;
        vector<long long> a(n);
        
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        sort(a.begin(), a.end());
        
        for (int i = 0; i < n; i += 2)
        {
            ans = max(ans, llabs(a[i + 1] - a[i]));
        }
        cout << ans << '\n';
    }

    return 0;
}
