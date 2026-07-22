// problem: 1881A
// title: Don't Try to Count

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        string x, s;
        cin >> n >> m;
        cin >> x >> s;
        bool flag = 1;

        for (int i = 0; i < 6; i++)
        {

            if (x.find(s) != std::string::npos)
            {
                cout << i << endl;
                flag = 0;
                break;
            }
            x += x;
        }
        if (flag)
            cout << -1 << endl;
    }

    return 0;
}