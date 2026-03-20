// problem: 1368A
// title: C+=

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;

        if (a < b)
            swap(a, b);
        if (a > n || b > n)
            cout << 0 << endl;
        else
        {
            int num_of_ops = 0;
            while (a <= n && b <= n)
            {
                b += a;
                if (a < b)
                    swap(a, b);
                num_of_ops++;
            }
            cout << num_of_ops << endl;
        }
    }

    return 0;
}