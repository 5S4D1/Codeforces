// problem: 1742A
// title: Sum

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int ab = a + b;
        int bc = b + c;
        int ca = c + a;

        if (ab == c || bc == a || ca == b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}