// problem: 1367A
// title: Short Substrings

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        string ans = "";
        ans += s[0];
        for (int i = 1; i < s.size(); i += 2)
        {
            ans += s[i];
        }
        cout << ans << endl;
    }

    return 0;
}