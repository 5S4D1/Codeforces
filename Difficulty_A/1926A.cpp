// problem: 1926A
// title: Vlad and the Best of Five

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;
        int count = 0;

        for (char x : str)
        {
            if (x == 'A')
                count++;
        }
        if (count > 2)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }

    return 0;
}