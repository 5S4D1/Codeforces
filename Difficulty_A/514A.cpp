// problem: 514A
// title: Chewbaсca and Number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    cin >> x;
    string s;

    while (x != 0)
    {
        int digit = x % 10;
        int diff = 9 - digit;

        if (diff == 0 && x > 9)
            s = to_string(diff) + s;

        else if (diff < digit && diff > 0)
            s = to_string(diff) + s;
        else
            s = to_string(digit) + s;

        x /= 10;
    }
    cout << s << endl;

    return 0;
}