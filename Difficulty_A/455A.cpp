// problem: 455A
// title: Boredom

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int freq[N];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        freq[temp]++;
    }

    long long dp[N];
    dp[0] = 0;

    for (int i = 1; i < N; i++)
    {
        dp[i] = (long long)i * freq[i];

        if (i - 2 >= 0)
            dp[i] += dp[i - 2];

        if (dp[i - 1] > dp[i])
            dp[i] = dp[i - 1];
    }

    cout << dp[N - 1] << endl;

    return 0;
}