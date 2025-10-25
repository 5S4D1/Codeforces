// problem: 1703B
// title: ICPC Balloons

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, balloons = 0;
        cin >> n;
        string s;
        cin >> s;

        vector<char> v;

        for (char solved : s)
        {

            if (find(v.begin(), v.end(), solved) != v.end())
            {
                balloons++;
            }
            else
            {
                balloons += 2;
                v.push_back(solved);
            }
        }

        cout << balloons << endl;
    }

    return 0;
}