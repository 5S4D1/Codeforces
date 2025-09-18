// problem: 1873A
// title: Short Sort

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string cards;
        cin >> cards;

        if (cards == "abc" || cards == "acb" || cards == "cba" || cards == "bac")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}