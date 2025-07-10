// sheet #1
// problem: X
// title: Two intervals

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if (l2 >= l1 && l2 <= r1)
    {
        if (r1 <= r2)
            cout << l2 << " " << r1 << endl;
        else if (r2 <= r1)
            cout << l2 << " " << r2 << endl;
    }
    else if (l1 >= l2 && l1 <= r2)
    {
        if (r1 <= r2)
            cout << l1 << " " << r1 << endl;
        else if (r2 <= r1)
            cout << l1 << " " << r2 << endl;
    }
    else
        cout << -1 << endl;

    return 0;
}