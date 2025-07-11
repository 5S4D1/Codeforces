// contest #1
// problem: D
// title: Ali Baba and Puzzles

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long r1 = a + b - c;
    if (r1 == d)
        cout << "YES" << endl;

    else if (a + b * c == d)
        cout << "YES" << endl;

    else if (a - b + c == d)
        cout << "YES" << endl;

    else if (a - b * c == d)
        cout << "YES" << endl;

    else if (a * b + c == d)
        cout << "YES" << endl;

    else if (a * b - c == d)
        cout << "YES" << endl;

    else
        cout << "NO" << endl;

    return 0;
}