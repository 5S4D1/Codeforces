// sheet #2
// problem: V
// title: PUM

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n * 4)
    {
        if (i % 4 == 0)
            cout << "PUM" << endl;
        else
            cout << i << " ";

        i++;
    }

    return 0;
}