// problem: 230B
// title: T-primes

#include <bits/stdc++.h>
using namespace std;

bool is_Tprime(long long n)
{
    if (n < 2)
        return false;
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        long long t;
        cin >> t;
        int count = 0;

        long long sqrt_t = sqrt(t);

        if (sqrt_t * sqrt_t == t && is_Tprime(sqrt_t))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}