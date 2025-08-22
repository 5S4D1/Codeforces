// problem: 750A
// title: New Year and Hurry

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, time = 240;
    cin >> n >> k;

    time -= k;

    int problems_solved = 0;
    for (int i = 1; i <= n; i++)
    {
        if (time >= 5 * i)
        {
            problems_solved++;
            time -= 5 * i;
        }
        else
            break;
    }
    cout << problems_solved << endl;

    return 0;
}