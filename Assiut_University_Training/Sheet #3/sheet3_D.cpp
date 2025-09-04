// sheet #3
// problem: D
// title: Positions in array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        array[i] = x;

        if (x <= 10)
            cout << "A[" << i << "] = " << x << endl;
    }

    return 0;
}