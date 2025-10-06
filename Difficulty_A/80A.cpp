// problem: 80A
// title: Panoramix's Prediction

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    bool mPrime = true;
    cin >> n >> m;

    for (int i = 2; i <= m / 2; i++)
    {
        if (m % i == 0)
            mPrime = false;
    }

    if (mPrime)
    {
        for (int i = 2; i <= m; i++)
        {
            bool prime = true;
            for (int j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    prime = false;
                    break;
                }
            }
            if (prime && i > n && i == m)
            {
                cout << "YES" << endl;
                break;
            }
            else if (prime && i > n && i != m)
            {
                cout << "NO" << endl;
                break;
            }
        }
    }
    else
        cout << "NO" << endl;

    return 0;
}