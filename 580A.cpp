// problem: 580A
// title: Kefa and First Steps

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, maximum = 0, count = 0;
    cin >> n;
    vector<int> day(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> day[i];
        if (day[i] >= day[i - 1] || i == 0)
        {
            count++;
            maximum = max(maximum, count);
        }
        else
        {
            count = 1;
        }
    }
    cout << maximum << endl;

    return 0;
}