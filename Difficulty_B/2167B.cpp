// problem: 2167B
// title: Your Name

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int q;
        cin >> q;
        string name1, name2;
        cin >> name1 >> name2;

        sort(name1.begin(), name1.end());
        sort(name2.begin(), name2.end());

        if (name1 == name2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }


    return 0;
}