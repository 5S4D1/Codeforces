// contest #1
// problem: I
// title: Lucky Numbers

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, firstDigit, secondDigit;
    cin >> n;

    firstDigit = n / 10;
    secondDigit = n % 10;

    if (secondDigit == 0 || firstDigit % secondDigit == 0 || secondDigit % firstDigit == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}