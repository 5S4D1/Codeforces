// problem: 1520D
// title: Same Differences

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        long long count = 0;
        cin >> n;
        unordered_map<int, int> a;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            count += a[x - i]++;
        }
        cout << count << endl;
    }

    return 0;
}