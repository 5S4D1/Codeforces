// problem: 2167C
// title: Isamatdin and His Magic Wand!

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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (any_of(a.begin(), a.end(), [](int x)
                   { return x % 2 == 1; }) &&
            any_of(a.begin(), a.end(), [](int x)
                   { return x % 2 == 0; }))
            sort(a.begin(), a.end());

        for (int x : a)
            cout << x << ' ';
        cout << endl;
    }

    return 0;
}