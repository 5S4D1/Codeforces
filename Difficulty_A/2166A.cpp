// problem: 2166A
// title: Same Difference

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        char last_char = s[n - 1];

        int count = 0;
        for (char c : s)
        {
            if (c != last_char)
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}