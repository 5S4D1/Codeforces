// problem: 474B
// title: Worms

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i > 0)
            a[i] += a[i - 1];
    }

    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];

    for (int x : b)
    {
        int low = 0, high = n - 1;
        int mid = high / 2;
        while (low < high)
        {
            if (a[mid] < x)
                low = mid + 1;
            else
                high = mid;
            mid = (low + high) / 2;
        }

        cout << low + 1 << endl;
    }

    return 0;
}