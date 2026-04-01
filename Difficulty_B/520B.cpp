// problem: 520B
// title: Two Buttons

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, count = 0;
    cin >> n >> m;

    while (true)
    {
        if (n == m)
            break;

        else if (m % 2 == 0 && m > n)
            m /= 2;
        else
            m += 1;

        count++;
    }
    cout << count << endl;

    return 0;
}