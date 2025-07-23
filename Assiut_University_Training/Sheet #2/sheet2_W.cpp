// sheet #2
// problem: V
// title: PUM

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // upper half
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n * 2; j++)
        {
            if (j < n - i)
                cout << " ";
            else if (j <= n + i)
                cout << "*";
        }
        cout << endl;
    }
    // lower half
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 1; j < n * 2; j++)
        {
            if (j < n - i)
                cout << " ";
            else if (j <= n + i)
                cout << "*";
        }
        cout << endl;
    }

    return 0;
}