// sheet #3
// problem: I
// title: Smallest Pair

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, min = INT_MAX, result = 0;
        cin >> n;
        int array[n];
        for (int i = 0; i < n; i++)
            cin >> array[i];

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                result = array[i] + array[j] + j - i;
                if (result < min)
                    min = result;
            }
        }
        cout << min << endl;
    }

    return 0;
}