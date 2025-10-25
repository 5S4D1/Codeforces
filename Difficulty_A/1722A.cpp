// problem: 1722A
// title: Spell Check

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string name = "Timur";
    sort(name.begin(), name.end());

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (n == 5)
        {
            sort(s.begin(), s.end());
            if (name == s)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}