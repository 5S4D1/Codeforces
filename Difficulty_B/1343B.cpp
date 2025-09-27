// problem: 1343B
// title: Balanced Array

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

        if (n / 2 % 2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        for (int i = 1; i <= n / 2; i++)
            cout << i * 2 << " ";

        for (int i = 1; i < n / 2; i++)
            cout << i * 2 - 1 << " ";
        cout << (3 * n / 2 - 1) << endl;
    }

    return 0;
}