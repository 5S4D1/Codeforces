// sheet #2
// problem: K
// title: Divisors

#include <bits/stdc++.h>
using namespace std;

bool isDivisor(int n, int d)
{
    return n % d == 0;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (isDivisor(n, i))
            cout << i << endl;
    }

    return 0;
}