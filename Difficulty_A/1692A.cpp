// problem: 1692A
// title: Marathon

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, c, d, infront;
    cin >> t;

    while (t--)
    {
        infront = 0;
        cin >> a >> b >> c >> d;
        if (a < b)
            infront++;
        if (a < c)
            infront++;
        if (a < d)
            infront++;

        cout << infront << endl;
    }

    return 0;
}