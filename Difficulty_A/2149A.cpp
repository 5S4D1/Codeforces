// problem: 2149A
// title: Be Positive

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, neg = 0, zero = 0, pos=0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x < 0)
                neg++;
            else if (x == 0)
                zero++;
            else
                pos++;
        }

        if (neg % 2 == 0)
            cout << zero << endl;
        else
            cout << (neg%2)*2 + zero << endl;
    }


    return 0;
}