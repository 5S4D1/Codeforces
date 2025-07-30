// problem: 1475A
// name: Odd Divisor

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        if (n % 2 != 0)
            cout << "YES" << endl;
        else
        {
            bool found = false;
            while (n != 1)
            {
                if (n % 2 == 0)
                {
                    n /= 2;
                }
                else
                {
                    cout << "YES" << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
                cout << "NO" << endl;
        }
    }

    return 0;
}