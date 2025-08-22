// problem: 136A
// title: Presents

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int presents[n + 1];

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        presents[x] = i + 1;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << presents[i] << " ";
    }
    cout << endl;

    return 0;
}