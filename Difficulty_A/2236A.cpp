// problem: 2236A
// title: Games on the Train

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
        vector<int> h(n);

        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        sort(h.begin(), h.end());

        // for(auto i : h)
        //     cout<<i<<" ";

        cout << h[n - 1] - h[0] + 1 << endl;
    }

    return 0;
}