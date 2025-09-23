// problem: 1829B
// title: Blank Space

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, maxLength = 0;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                int start = i;
                while (arr[i] == 0 && i < n)
                {
                    i++;
                }

                maxLength = max(maxLength, i - start);
            }
        }
        cout << maxLength << endl;
    }

    return 0;
}