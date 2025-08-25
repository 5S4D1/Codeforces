// problem: 1154A
// title: Restoring Three Numbers

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    int a = v[3] - v[0];
    int b = v[3] - v[1];
    int c = v[3] - v[2];
    cout << a << " " << b << " " << c << endl;

    return 0;
}