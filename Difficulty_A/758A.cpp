// problem: 758A
// title: Holiday Of Equality

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, maxBurles = 0, totalBurles = 0;
    cin >> n;
    int burles[n];

    for (int i = 0; i < n; i++)
    {
        cin >> burles[i];
        if (burles[i] > maxBurles)
            maxBurles = burles[i];
    }

    for (int i = 0; i < n; i++)
    {
        totalBurles += maxBurles - burles[i];
    }
    
    cout << totalBurles << endl;

    return 0;
}