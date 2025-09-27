// problem: 2149D
// title: A and B

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll min_swaps_to_group(const vector<int> &pos)
{
    int k = (int)pos.size();
    if (k <= 1)
        return 0;

    vector<ll> adjusted(k);
    for (int i = 0; i < k; ++i)
        adjusted[i] = (ll)pos[i] - i;
        
    sort(adjusted.begin(), adjusted.end());

    ll med = adjusted[k / 2];
    ll cost = 0;

    for (int i = 0; i < k; ++i)
        cost += llabs(adjusted[i] - med);

    return cost;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> posA, posB;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == 'a')
                posA.push_back(i);
            else
                posB.push_back(i);
        }

        ll ansA = min_swaps_to_group(posA);
        ll ansB = min_swaps_to_group(posB);
        cout << min(ansA, ansB) << '\n';
    }

    return 0;
}
