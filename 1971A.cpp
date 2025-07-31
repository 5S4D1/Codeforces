// problem: 1971A
// title: My First Sorting Problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int i = 0;
    while (i < t)
    {
        int x, y;
        cin >> x >> y;
        if (x < y)
        {
            cout << x << " " << y << endl;
        }
        else
            cout << y << " " << x << endl;

        i++;
    }

    return 0;
}