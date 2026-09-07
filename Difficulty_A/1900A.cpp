// problem: 1900A
// title: Cover in Water

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count1 = 0;
        bool flag = 0;
        string s;
        cin >> n;
        cin >> s;
        // npos = no position
        if (s.find("...") != string::npos)
        {
            count1 += 2;
            flag = 1;
        }
        else if (!flag)
        {
            count1 = (count(s.begin(), s.end(), '.'));
        }
        cout << count1 << endl;
    }

    return 0;
}