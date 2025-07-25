// contest #2
// problem: C
// title: Finding Minimums

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int store[n];

    for (int i = 0; i < n; i++)
    {
        cin >> store[i];
    }

    for (int i = 0; i < n; i += k)
    {
        int groupSize = min(k, n - i);
        int groupMin = store[i];

        // Find minimum in current group
        for (int j = i + 1; j < i + groupSize; j++)
        {
            if (store[j] < groupMin)
            {
                groupMin = store[j];
            }
        }

        cout << groupMin;
        if (i + k < n)
            cout << " ";
    }
    cout << endl;

    return 0;
}