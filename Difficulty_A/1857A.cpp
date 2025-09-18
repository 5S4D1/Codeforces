// problem: 1857A
// title: Array Coloring

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, sum = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            sum += v;
        }

        if (sum % 2 == 0)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}