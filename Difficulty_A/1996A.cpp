// problem: 1996A
// title: Legs

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, animals = 0;
        cin >> n;
        if (n >= 4)
        {
            animals += n / 4;
            n -= (n / 4) * 4;
        }
        if (n >= 2)
        {
            animals += n / 2;
        }
        
        cout << animals << endl;
    }

    return 0;
}