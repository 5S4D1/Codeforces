// problem: 2236B
// title: Tatar TV Show

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
        cin >> n >> k >> s;

        bool possible = true;

        for (int g = 0; g < k; g++)
        {
            int ones = 0;
            for (int i = g; i < n; i += k)
            {
                if (s[i] == '1')
                    ones++;
            }
            if (ones % 2 != 0)
            {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << "\n";
    }
    return 0;
}
