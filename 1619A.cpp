// problem: 1619A
// name: Square String?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        if (n % 2 == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        bool isSquare = true;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[(n / 2) + i])
            {
                isSquare = false;
                break;
            }
        }
        if (isSquare)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}