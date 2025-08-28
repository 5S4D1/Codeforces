// problem: 1399A
// title: Remove Smallest

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> num;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            num.push_back(a);
        }

        sort(num.begin(), num.end());
        int flag = 1;
    
        for (int i = 1; i < n; i++)
        {
            if (num[i] - num[i - 1] > 1)
            {
                flag = 0;
                break;
            }
        }
        if (flag != 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}