// problem: 1472B
// title: Fair Division

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, odd, even;
        n = a = odd = even = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a % 2 == 0)
                even++;
            else
                odd++;
        }

        if (odd % 2 == 0 && even % 2 == 0)
            cout << "YES" << endl;
        else if (even % 2 != 0 && odd % 2 == 0 && odd > 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}