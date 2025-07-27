// contest #2
// problem: D
// title: Range Sum

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long l, r;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> l >> r;

        if (l > r)
            swap(l, r);

        long long sum = (r * (r + 1) / 2) - (l * (l - 1) / 2);
        
        cout << sum << endl;
    }

    return 0;
}