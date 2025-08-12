// problem: 479A
// title: Expression

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, c;
    cin >> a >> b >> c;

    int result = max({a + b + c, a * b * c, a * (b + c), (a + b) * c, a + b * c, a * b + c});
    cout << result << endl;

    return 0;
}