// problem: 706B
// title: Interesting drink

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    vector<int> price;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        price.push_back(p);
    }
    sort(price.begin(), price.end());

    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int coin;
        cin >> coin;

        auto count = upper_bound(price.begin(), price.end(), coin) - price.begin();

        if (count < n && price[count] == coin)
        {
            cout << ++count << endl;
        }
        else
        {
            cout << count << endl;
        }
    }

    return 0;
}