// problem: 144A
// title: Arrival of the General

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> heights(n);
    int minHeight = INT_MAX, maxHeight = INT_MIN;
    int minIndex = -1, maxIndex = -1;

    for (int i = 0; i < n; ++i)
    {
        cin >> heights[i];
        if (heights[i] <= minHeight)
        {
            minHeight = heights[i];
            minIndex = i;
        }
        if (heights[i] > maxHeight)
        {
            maxHeight = heights[i];
            maxIndex = i;
        }
    }

    if (maxIndex > minIndex)
        cout << maxIndex + (n - minIndex - 2) << endl;
    else
        cout << maxIndex + (n - minIndex - 1) << endl;

    return 0;
}