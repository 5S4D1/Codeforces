// problem: 155A
// title: I_love_%username%

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, min, max, amazing;
    min = max = amazing = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i == 0)
        {
            min = max = x;
        }
        else
        {
            if (x > max)
            {
                amazing++;
                max = x;
            }
            else if (x < min)
            {
                amazing++;
                min = x;
            }
        }
    }
    cout << amazing << endl;

    return 0;
}