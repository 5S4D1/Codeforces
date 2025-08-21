// problem: 9A
// title: Die Roll

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y, w;
    cin >> y >> w;

    int maxValue = max(y, w);
    int numerator = 6;
    int dominators = 7 - maxValue;
    int gcd = __gcd(dominators, numerator);

    cout << dominators / gcd << "/" << numerator / gcd << endl;

    return 0;
}