// problem: 456A
// title: Laptops

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    bool flag = false;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a != b)
        {
            flag = true;
            break;
        }
    }

    if (flag)
        cout << "Happy Alex" << endl;
    else
        cout << "Poor Alex" << endl;

    return 0;
}