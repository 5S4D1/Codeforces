// problem: 2227C
// title: Snowfall

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
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> both;  // divisible by 6
        vector<int> two;   // divisible by 2 only
        vector<int> three; // divisible by 3 only
        vector<int> other; // neither

        for (int x : a)
        {
            bool d2 = (x % 2 == 0);
            bool d3 = (x % 3 == 0);

            if (d2 && d3)
                both.push_back(x);
            else if (d2)
                two.push_back(x);
            else if (d3)
                three.push_back(x);
            else
                other.push_back(x);
        }

        vector<int> ans;
        if (both.size() > 0)
            for (int x : both)
                ans.push_back(x);
        if (two.size() > 0)
            for (int x : two)
                ans.push_back(x);
        if (other.size() > 0)
            for (int x : other)
                ans.push_back(x);
        if (three.size() > 0)
            for (int x : three)
                ans.push_back(x);

        for (int i = 0; i < n; i++)
        {
            if (i)
                cout << ' ';
            cout << ans[i];
        }

        cout << '\n';
    }

    return 0;
}