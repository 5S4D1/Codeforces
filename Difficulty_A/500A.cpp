// problem: 500A
// title: New Year Transportation

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;
    vector<int> a(n - 1);

    for (int i = 0; i < n - 1; i++)
        cin >> a[i];

    int i = 0;
    while (i < t)
    {
        if (i == t - 1)
        {
            cout << "YES" << endl;
            break;
        }
        i += a[i];
    }
    
    if (i != t - 1)
        cout << "NO" << endl;

    return 0;
}