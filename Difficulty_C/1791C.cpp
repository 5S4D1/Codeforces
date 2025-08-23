// problem: 1791C
// title: Prepend and Append

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    string s;
    cin >> t;

    while (t--)
    {
        cin >> n >> s;
        int length = s.size();
        
        while (n--)
        {
            if (s[0] != s[s.size() - 1])
            {
                s.pop_back();
                s.erase(s.begin());
                length -= 2;
                if (length <= 0)
                    break;
            }
            else
                break;
        }
        cout << length << endl;
    }

    return 0;
}