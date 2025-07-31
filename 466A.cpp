// problem: 466A
// name: Cheap Travel

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b, totalCost = 0;
    cin >> n >> m >> a >> b;

    if (a <= b / m)
    {
        totalCost = n * a;
    }
    else
    {
        int fullRides = n / m;
        int remainingRides = n - fullRides * m;

        int totalCost1 = (fullRides * b) + (remainingRides * a);
        int totalCost2 = ((fullRides + 1) * b);
        
        totalCost = min(totalCost1, totalCost2);
    }

    cout << totalCost << endl;

    return 0;
}