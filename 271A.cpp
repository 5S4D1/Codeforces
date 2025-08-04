// problem: 271A
// title: Beautiful Year

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cin >> year;

    while (true)
    {
        year++;
        int digits[4];
        digits[0] = year / 1000;
        digits[1] = (year / 100) % 10;
        digits[2] = (year / 10) % 10;
        digits[3] = year % 10;

        if (digits[0] != digits[1] && digits[0] != digits[2] && digits[0] != digits[3] &&
            digits[1] != digits[2] && digits[1] != digits[3] &&
            digits[2] != digits[3])
        {
            cout << year << endl;
            break;
        }
    }

    return 0;
}