// problem: 1374A
// title: Required Remainder

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;

        int remainder = n % a;
        if (a > n)
            cout << b << endl;
        else if (remainder == b)
            cout << n << endl;
        else if (remainder > b)
            cout << n + (b - remainder) << endl;
        else
            cout << (n - remainder) - (a - b) << endl;
    }

    return 0;
}