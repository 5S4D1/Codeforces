// problem: 160A
// title: Twins

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, total, sum, count;
    total = sum = count = 0;

    cin >> n;
    vector<int> coins(n);

    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
        total += coins[i];
    }
    sort(coins.rbegin(), coins.rend());

    for (int i = 0; i < n; i++)
    {
        sum += coins[i];
        count++;
        if (sum > total - sum)
        {
            cout << count << endl;
            break;
        }
    }

    return 0;
}