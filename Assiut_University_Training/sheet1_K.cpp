// sheet #1
// problem: I
// title: Max and Min

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int max_value, min_value;
    max_value = max({a, b, c});
    min_value = min({a, b, c});

    cout << min_value << " " << max_value << endl;

    return 0;
}