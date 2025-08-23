// problem: 1676A
// title: Lucky?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;
    cin >> t;

    while (t--)
    {
        cin >> s;
        int left_sum = 0, right_sum = 0;
        
        for (int i = 0; i < 6; i++)
        {
            if (i < 3)
                left_sum += static_cast<int>(s[i]);
            else
                right_sum += static_cast<int>(s[i]);
        }

        if (left_sum == right_sum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}