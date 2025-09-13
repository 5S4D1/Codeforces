// problem: 2148D
// title: Destruction of the Dandelion Fields

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        long long count = 0;
        cin >> n;

        vector<long long> odd, even;
        for (int i = 0; i < n; i++)
        {
            long long temp;
            cin >> temp;
            if (temp % 2 == 0)
                count += temp;
            else
                odd.push_back(temp);
        }

        if (odd.empty())
        {
            cout << 0 << endl;
            continue;
        }

        sort(odd.begin(), odd.end(), greater<long long>());

        int take = (odd.size() + 1) / 2;
        for (int i = 0; i < take; i++)
            count += odd[i];

        cout << count << endl;
    }

    return 0;
}
