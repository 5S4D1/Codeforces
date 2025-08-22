// problem: 2132A
// title: Homework
// date : 08-21-2025

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        string a, b, c;

        cin >> n >> a >> m >> b >> c;

        for (int i = 0; i < c.size(); i++)
        {
            if (c[i] == 'D')
            {
                a = a + b[i];
            }
            else if (c[i] == 'V')
            {
                a = b[i] + a;
            }
        }
        cout << a << endl;

        a.clear();
        b.clear();
        c.clear();
    }

    return 0;
}