// sheet #2
// problem: E
// title: Max

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, maximum = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        if (temp > maximum)
            maximum = temp;

    }
    cout << maximum << endl;

    return 0;
}