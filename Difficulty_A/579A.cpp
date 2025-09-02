// problem: 579A
// title: Raising Bacteria

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;
    while (n > 0)
    {
        if (n % 2 == 1)
            count++;
        n /= 2;
    }
    cout << count << endl;

    // Also solve it using bitwise operations method
    // cout << __builtin_popcount(n) << endl;

    return 0;
}