// problem: 1878C
// title: Vasilije in Cacak

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long n, k, x, min, max;
    
    while (t--)
    {
        cin >> n >> k >> x;

        min = (k * (k + 1)) / 2;
        max = ((n * (n + 1)) / 2) - (((n - k) * ((n - k) + 1)) / 2);

        if (max >= x && min <= x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}