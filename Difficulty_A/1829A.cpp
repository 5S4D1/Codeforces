// problem: 1829A
// title: Love Story

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string codeforces = "codeforces";
    cin >> t;

    while (t--)
    {
        string s;
        int count = 0;
        cin >> s;
        for (int i = 0; i < 10; i++)
        {
            if (s[i] != codeforces[i])
                count++;
        }
        cout << count << endl;
    }

    return 0;
}