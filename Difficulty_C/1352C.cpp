// problem: 1352C
// title: K-th Not Divisible by n

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k, i = 1;
        cin >> n >> k;

        int q = k / (n - 1);
        int r = k % (n - 1);
        if (r == 0)
            cout << n * q - 1 << endl;
        else
            cout << n * q + r << endl;
    }


    return 0;
}