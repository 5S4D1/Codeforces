// problem: 472A
// title: Design Tutorial: Learn from Math

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int n, first = 4, second = 0;
    cin >> n;
    while (true)
    {
        second = n - first;

        if (isPrime(first) || isPrime(second))
        {
            first++;
            second--;
        }
        else
        {
            cout << first << " " << second << endl;
            break;
        }
    }

    return 0;
}