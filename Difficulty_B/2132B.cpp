// problem: 2132B
// title: The Secret Number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> ans;
        long long p = 10; // start from 10^1

        for (int k = 1; k <= 18; k++)
        {
            long long denom = p + 1; // 10^k + 1
            if (denom > n)
                break;

            if (n % denom == 0)
            {
                long long x = n / denom;
                ans.push_back(x);
            }
            if (p > 1e18 / 10)
                break; // avoid overflow

            p *= 10;
        }

        if (ans.empty())
        {
            cout << 0 << "\n";
        }
        else
        {
            sort(ans.begin(), ans.end());
            cout << ans.size() << "\n";

            for (int i = 0; i < (int)ans.size(); i++)
            {
                cout << ans[i] << (i + 1 == (int)ans.size() ? '\n' : ' ');
            }
        }
    }

    return 0;
}