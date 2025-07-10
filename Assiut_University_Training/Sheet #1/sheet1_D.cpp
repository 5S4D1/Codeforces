// sheet #1
// problem: D
// title: Difference

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    long long result;
    cin >> a >> b >> c >> d;

    result = (long long)a * b - (long long)c * d;

    cout << "Difference = " << result << endl;

    return 0;
}