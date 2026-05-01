// problem: 2218B
// title: The 67th 6-7 Integer Problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n = 7;
    cin >> t;
    vector<int> a(n);
    
    while (t--)
    {
        for (int &i : a)
            cin >> i;
        sort(a.begin(), a.end());
        int sum = 0;

        for (int i = 0; i < n - 1; i++)
            sum += a[i] * (-1);

        sum += a[6];
        cout << sum << endl;
    }

    return 0;
}