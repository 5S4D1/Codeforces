// problem: 363B
// title: Fence

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, sum = 0;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int minSum = sum, index = 0;

    for (int i = k; i < n; i++)
    {
        cin >> a[i];
        sum = sum - a[i - k] + a[i];

        if (sum < minSum)
        {
            minSum = sum;
            index = i - k + 1;
        }
    }
    cout << index + 1 << endl;

    return 0;
}
