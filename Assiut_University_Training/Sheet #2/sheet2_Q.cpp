// sheet #2
// problem: Q
// title: Digits

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        if (num == 0)
            cout << "0";

        else
        {
            while (num > 0)
            {
                cout << num % 10 << " ";
                num /= 10;
            }
        }
        cout << endl;
    }

    return 0;
}