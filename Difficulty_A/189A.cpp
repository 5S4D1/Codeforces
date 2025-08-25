// problem: 189A
// title: Cut Ribbon

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c, coutnter = 0;

    while (cin >> n >> a >> b >> c)
    {
        for (int i = 0; i <= n / a; i++)
        {
            for (int j = 0; j <= n / b; j++)
            {
                if ((n - a * i - b * j) % c == 0 && n - a * i - b * j >= 0)
                    coutnter = max(coutnter, i + j + (n - a * i - b * j) / c);
            }
        }
    }

    cout << coutnter << endl;

    return 0;
}