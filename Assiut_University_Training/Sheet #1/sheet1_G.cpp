// sheet #1
// problem: G
// title: Sum from 1 to N

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long sum = n * (n + 1) / 2;
    cout << fixed << setprecision(0) << sum;

    return 0;
}