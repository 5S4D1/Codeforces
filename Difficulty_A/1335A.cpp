// problem: 1335A
// title: Candies and Two Sisters

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
        int n;
        cin >> n;

        if (n < 3)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (n - 1) / 2 << endl;
        }
    }

    return 0;
}