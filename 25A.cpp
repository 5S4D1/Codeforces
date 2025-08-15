// problem: 25A
// title: IQ test

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, oddCount = 0, evenCount = 0, oddIndex = -1, evenIndex = -1;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
        if (numbers[i] % 2 == 0)
        {
            evenCount++;
            evenIndex = i + 1;
        }
        else
        {
            oddCount++;
            oddIndex = i + 1;
        }
    }

    if (oddCount == 1)
        cout << oddIndex << endl;

    else
        cout << evenIndex << endl;

    return 0;
}