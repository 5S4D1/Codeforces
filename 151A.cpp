// problem: 151A
// title: Soft Drinking
// date : 08-22-2025

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drinks = k * l;
    int enough_drinks = total_drinks / nl;
    int total_slices = c * d;
    int salt_for = p / np;

    int min_drinks = min(enough_drinks, min(total_slices, salt_for));

    cout << min_drinks / n << endl;

    return 0;
}