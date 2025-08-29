// problem: 1512A
// title: Spy Detected!

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }

        int first = a[0];
        int second = a[1];
        int third = a[2];

        if (first == second)
        {
            for (int i = 2; i < n; i++)
            {
                if (a[i] != first)
                {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
        else if (first != second && first != third)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }

    return 0;
}