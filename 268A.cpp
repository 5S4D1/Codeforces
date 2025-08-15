// problem: 268A
// title: Games

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, count = 0;
    vector<pair<int, int>> teams;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int home, away;
        cin >> home >> away;
        teams.push_back({home, away});
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i != j && teams[i].first == teams[j].second)
            {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}