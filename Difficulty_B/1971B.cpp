// problem: 1971B
// title: Different String

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        bool flag = true;
        cin >> s;
        int n = s.size();

        for (int i = 0; i < n; i++)
        {
            if (s[i] != s[0])
            {
                flag = false;
                cout << "YES" << endl;
                break;
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] != s[0])
            {
                swap(s[0], s[i]);
                break;
            }
        }
        cout << s << endl;
    }

    return 0;
}