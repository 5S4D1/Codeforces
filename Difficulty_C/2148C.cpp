// problem: 2148C
// title: Pacer

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<pair<int, int>> requirements;

        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            requirements.push_back({a, b});
        }

        long long totalPoints = 0;
        int currentSide = 0; // FJ starts at side 0
        int currentTime = 0; // starts at minute 0

        for (int i = 0; i < n; i++)
        {
            int nextTime = requirements[i].first;
            int nextSide = requirements[i].second;

            int timeAvailable = nextTime - currentTime;

            if ((currentSide + timeAvailable) % 2 != nextSide)
            {
                // Impossible to reach required side - need to waste 1 minute
                totalPoints += timeAvailable - 1;
            }
            else
            {
                totalPoints += timeAvailable;
            }

            currentSide = nextSide;
            currentTime = nextTime;
        }

        // If time remaining after meet the last requirement
        if (currentTime < m)
        {
            totalPoints += m - currentTime;
        }

        cout << totalPoints << endl;
    }

    return 0;
}