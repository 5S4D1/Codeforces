// problem: 1883A
// title: Morning

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
        int count = 0;
        char initial = '1';
        string pin;
        cin >> pin;

        for (char c : pin)
        {
            if (c == '0')
                c = ':';

            count += abs(c - initial) + 1;
            initial = c;
        }
        cout << count << endl;
    }

    return 0;
}