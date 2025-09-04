// sheet #3
// problem: B
// title: Searching

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
        cin >> array[i];

    int find;
    cin >> find;

    for (int i = 0; i < n; i++)
    {
        if (array[i] == find)
        {
            cout << i << endl;
            break;
        }
        if (i == n - 1)
            cout << -1 << endl;
    }

    return 0;
}