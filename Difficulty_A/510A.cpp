// problem: 510A
// title: Fox And Snake

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    bool flag = false;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                cout << "#";
            }
            cout << endl;
            flag = !flag;
        }
        else
        {
            if (flag)
            {
                for (int j = 0; j < m - 1; j++)
                {
                    cout << ".";
                }
                cout << "#";
            }
            else
            {
                cout << "#";
                for (int j = 0; j < m - 1; j++)
                {
                    cout << ".";
                }
            }
            cout << endl;
        }
    }

    return 0;
}