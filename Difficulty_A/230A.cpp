// problem: 230A
// title: Dragons

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> dragons;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        dragons.emplace_back(x, y);
    }

    sort(dragons.begin(), dragons.end());

    for (auto &dragon : dragons)
    {
        if (s > dragon.first)
            s += dragon.second;
        else
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";

    return 0;
}