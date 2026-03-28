// problem: 1883B
// title: Chemistry

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
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;
        if (n - k == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        
        int count = 0;
        map<char, int> m;
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
        }
        
        for (auto i : m)
        {
            if (i.second % 2)
                count++;
        }
        cout << (count <= k + 1 ? "YES" : "NO") << endl;
    }

    return 0;
}