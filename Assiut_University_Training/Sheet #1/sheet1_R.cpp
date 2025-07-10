// sheet #1
// problem: R
// title: Age in Days

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, year, month;
    cin >> n;
    year = month = 0;
    if (n >= 365)
    {
        year = n / 365;
        n = n - (year * 365);
    }
    if (n >= 30)
    {
        month = n / 30;
        n = n - (month * 30);
    }
    cout << year << " years" << endl;
    cout << month << " months" << endl;
    cout << n << " days" << endl;

    return 0;
}