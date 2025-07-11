// contest #1
// problem: E
// title: Interval Sweep

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    // We need a non-empty interval, so a + b > 0
    // In any interval, the difference between odd and even counts is at most 1
    if (a + b > 0 && abs(a - b) <= 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}