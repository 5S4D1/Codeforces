// problem: 2214C
// title: And?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> abc(3);
        for (int i = 0; i < 3; i++)
            cin >> abc[i];
        sort(abc.begin(), abc.end());

        int result = abc[0] ^ abc[1] ^ abc[2];
        cout << result - abc[1] << endl;
    }

    return 0;
}