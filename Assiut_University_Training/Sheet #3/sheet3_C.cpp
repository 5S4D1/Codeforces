// sheet #3
// problem: C
// title: Replacement

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
        if (x < 0)
            array[i] = 2;
        else if (x > 0)
            array[i] = 1;
        else
            array[i] = x;
    }

    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << endl;

    return 0;
}