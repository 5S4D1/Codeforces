// problem: 581A
// title: Vasya the Hipster

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int x = min(a, b);

    cout << x << " " << (a - x) / 2 + (b - x) / 2 << endl;

    return 0;
}