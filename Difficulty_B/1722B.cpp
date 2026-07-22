// problem: 1722B
// title: Colourblindness

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string line1, line2;
        cin >> line1 >> line2;

        replace(line1.begin(), line1.end(), 'G', 'B');
        replace(line2.begin(), line2.end(), 'G', 'B');

        if (line1 == line2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}