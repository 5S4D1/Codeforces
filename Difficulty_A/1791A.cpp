// problem: 1791A
// title: Codeforces Checking

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s = "codeforces";

    while (t--)
    {
        char c;
        cin >> c;
        bool found = false;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == c)
                found = true;
        }

        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}