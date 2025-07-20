// sheet #2
// problem: J
// title: Primes from 1 to n

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i;

            if (i < n)
                cout << " ";
        }
    }
    cout << endl;

    return 0;
}