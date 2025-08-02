// problem: 1367B
// title: Even Array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, oddCount = 0, evenCount = 0;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 != i % 2)
            {
                if (arr[i] % 2 == 0)
                    evenCount++;
                else
                    oddCount++;
            }
        }
        
        if (evenCount != oddCount)
            cout << -1 << endl;

        else
            cout << evenCount << endl;
    }

    return 0;
}