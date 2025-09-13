// problem: 2148B
// title: Lasers

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, x, y;
        cin >> n >> m >> x >> y;

        int horizontalLine[n];
        int verticalLine[m];

        for (int i = 0; i < n; i++)
            cin >> horizontalLine[i];

        for (int i = 0; i < m; i++)
            cin >> verticalLine[i];

        cout << n + m << endl;
    }

    return 0;
}