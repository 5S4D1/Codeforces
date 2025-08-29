// problem: 34B
// title: Sale

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> price;

    while(n--)
    {
        int p;
        cin >> p;
        price.push_back(p);
    }

    sort(price.begin(), price.end());

    int total_earn = 0;
    for (int i = 0; i < m; i++)
    {
        if (price[i] < 0)
            total_earn += price[i];
    }

    cout << abs(total_earn) << endl;

    return 0;
}