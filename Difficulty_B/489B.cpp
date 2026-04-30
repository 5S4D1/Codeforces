// problem: 489B
// title: BerSU Ball

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int last = 0, count = 0;
    for (int i : a)
    {
        for (int j = last; j < m; j++)
        {
            if (abs(i - b[j]) <= 1)
            {
                last = j + 1;
                count++;
                break;
            }
        }
    }
    cout << count << endl;

    return 0;
}