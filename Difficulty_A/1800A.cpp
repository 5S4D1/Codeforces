// problem: 1800A
// title: Is It a Cat?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        int m,e,o,w;
        m=e=o=w=0;
        string s;
        cin >> n >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        s.erase(unique(s.begin(), s.end()), s.end());

        cout << (s == "meow" ? "YES" : "NO") << endl;
    }

    return 0;
}