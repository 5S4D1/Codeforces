// problem: 2236C
// title: Omsk Programmers

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, x;
        cin >> a >> b >> x;

        int diff = abs(a - b);
        int ans = diff;
        int count = 0;

        if (diff == 0)
        {
            cout << 0 << endl;
            continue;
        }

        while (a != b)
        {
            if (a > b)
                a = a / x;
            else
                b = b / x;

            count++;
            diff = abs(a - b);
            ans = min(ans, count + diff);
        }
        cout << ans << endl;
    }

    return 0;
}