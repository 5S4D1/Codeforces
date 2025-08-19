// problem: 158B
// title: Taxi

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int c1 = 0,
        c2 = 0,
        c3 = 0,
        c4 = 0,
        cars = 0;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;

        if (x == 1)
            c1++;
        else if (x == 2)
            c2++;
        else if (x == 3)
            c3++;
        else if (x == 4)
            c4++;
    }

    cars += c4;
    cars += c3;
    c1 = max(0, c1 - c3);

    cars += c2 / 2;
    if (c2 % 2)
    {
        cars += 1;
        c1 = max(0, c1 - 2);
    }
    cars += (c1 + 3) / 4;

    cout << cars << endl;

    return 0;
}