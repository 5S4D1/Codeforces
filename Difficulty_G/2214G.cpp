// problem: 2214G
// title: Anomaly

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "bigchadjeff";
    int t;
    cin >> t;

    while (t--)
    {
        int i;
        cin >> i;

        cout << s[i - 1] << endl;
    }

    return 0;
}