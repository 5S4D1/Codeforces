// problem: 1374B
// title: Multiply by 2, divide by 6

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;

        while (n)
        {
            if (n == 1)
            {
                cout << count << endl;
                break;
            }
            else if (n % 6 == 0)
            {
                n /= 6;
                count++;
            }
            else if (n % 3 == 0)
            {
                n *= 2;
                count++;
            }
            else
            {
                cout << -1 << endl;
                break;
            }
        }
    }

    return 0;
}