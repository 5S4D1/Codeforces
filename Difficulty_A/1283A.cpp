// problem: 1772A
// title: A+B?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int hour, minute;
        cin >> hour >> minute;

        int time_left = (23 - hour) * 60 + (60 - minute);
        
        cout << time_left << endl;
    }

    return 0;
}