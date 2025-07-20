// sheet #2
// problem: M
// title: Lucky Numbers

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    bool found = false, isLucky;

    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        int num = i;
        isLucky = true;

        while (num > 0)
        {
            int digit = num % 10;
            if (digit != 4 && digit != 7)
            {
                isLucky = false;
                break;
            }
            num /= 10;
        }

        if (isLucky)
        {
            cout << i << " ";
            found = true;
        }
    }

    if (found)
        cout << endl;
    else
        cout << -1 << endl;

    return 0;
}