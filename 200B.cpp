// problem: 200B
// title: Drinks

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, volume = 0, store;
    cin >> n;
    store = n;
    while (n--)
    {
        int x;
        cin >> x;
        volume += x;
    }
    cout << fixed << setprecision(12) << static_cast<double>(volume) / store << endl;

    return 0;
}