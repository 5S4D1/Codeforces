// sheet #1
// problem: P
// title: First Digit !

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if ((s[0] - '0') % 2 == 0)
    {
        cout << "EVEN";
    }
    else
    {
        cout << "ODD";
    }

    return 0;
}