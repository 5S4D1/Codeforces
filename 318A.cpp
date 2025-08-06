// problem: 318A
// title: Even Odds

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    long long evenCount = n / 2;
    long long oddCount = n - evenCount;

    if (k <= oddCount)
        cout << 2 * k - 1 << endl;

    else
        cout << 2 * (k - oddCount) << endl;

    return 0;
}