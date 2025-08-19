// problem: 1352A
// title: Sum of Round Numbers

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;

        vector<int> roundNumbers;

        if (x < 10)
        {
            roundNumbers.push_back(x);
        }
        else
        {
            // for right most digit
            int factor = 1;
            while (x > 0)
            {
                int digit = x % 10;
                if (digit != 0)
                {
                    roundNumbers.push_back(digit * factor);
                }
                // Remove the last digit
                x /= 10;
                // Moves to the next higher place value (ones → tens → hundreds ...)
                factor *= 10;
            }
        }

        cout << roundNumbers.size() << endl;
        for (int i = roundNumbers.size() - 1; i >= 0; --i)
        {
            cout << roundNumbers[i];
            if (i > 0)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}