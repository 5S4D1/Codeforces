// problem: 2166B
// title: Tab Closing

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a,b,n;
        cin >> a >> b >> n;

        int len = min (b, a/n);

        if (len < b && a!=b)
            cout << 2 << endl;
        else
            cout << 1 << endl;

    }


    return 0;
}