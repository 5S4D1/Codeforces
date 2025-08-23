// problem: 492B
// title: Vanya and Lanterns

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double l;
    cin >> n >> l;

    vector<double> lanterns;

    for (int i = 0; i < n; i++)
    {
        double x;
        cin >> x;
        lanterns.push_back(x);
    }

    sort(lanterns.begin(), lanterns.end());

    double max_distance = 0.0;
    // start point to first lantern
    max_distance = max(max_distance, (lanterns[0] - 0));
    // last lantern to end point
    max_distance = max(max_distance, (l - lanterns[n - 1]));

    for (int i = 1; i < n; i++)
    {
        double distance = (lanterns[i] - lanterns[i - 1]) / 2;
        max_distance = max(max_distance, distance);
    }

    cout << fixed << setprecision(10) << max_distance << endl;

    return 0;
}