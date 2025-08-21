// problem: 2131A
// title: Lever

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
        vector<int> a(n), b(n);

        for (int &x : a)
            cin >> x;

        for (int &x : b)
            cin >> x;

        int iterations = 0;

        while (true)
        {
            bool step1_done = false;

            // Step 1: choose ONE index with a[i] > b[i]
            for (int i = 0; i < n; i++)
            {
                if (a[i] > b[i])
                {
                    a[i]--;
                    step1_done = true;
                    break;
                }
            }

            // Step 2: choose ONE index with a[i] < b[i]
            for (int i = 0; i < n; i++)
            {
                if (a[i] < b[i])
                {
                    a[i]++;
                    break;
                }
            }

            iterations++;

            if (!step1_done)
                break; // break if Step 1 was skipped
        }
        cout << iterations << "\n";
    }

    return 0;
}