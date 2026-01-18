// problem: 2185B
// title: Prefix Max

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        sort(arr.rbegin(), arr.rend());

        int ans = 0;
        ans = arr[0] * n;

        cout << ans << endl;
    }

    return 0;
}