// problem: 2185C
// title: Shifted MEX

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

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // Store unique elements in a set (duplicates automatically removed)
        set<long long> uniqueSet(a.begin(), a.end());

        int maxMex = 0;

        // For each unique element, try it as a starting point and count consecutive sequence
        for (long long num : uniqueSet)
        {
            int count = 0;
            
            for (long long val = num; uniqueSet.count(val); val++)
            {
                count++;
            }
            maxMex = max(maxMex, count);
        }

        cout << maxMex << "\n";
    }

    return 0;
}
