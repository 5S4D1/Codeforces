// problem: 1807D
// title: Odd Queries

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
        int n, q, a;
        cin >> n >> q;

        vector<int> temp(n + 1);
        temp[0] = 0;

        for (int i = 1; i <= n; i++)
        {
            cin >> a;
            temp[i] = temp[i - 1] + a;
        }
        // cout<< temp[n]<<endl;
        for (int i = 0; i < q; i++)
        {
            int l, r, k;
            cin >> l >> r >> k;

            int sum = temp[n] - temp[r] + temp[l - 1];
            // cout << sum << endl;

            sum += (r - l + 1) * k;

            if (sum % 2 != 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}