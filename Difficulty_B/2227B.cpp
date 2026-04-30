// problem: 2227B
// title: Party Monster

#include <bits/stdc++.h>
using namespace std;

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

        if (n % 2 != 0)
            cout << "NO" << endl;
        else
        {
            sort(s.begin(), s.end());
            
            if (s[(n / 2) - 1] != s[n / 2])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}