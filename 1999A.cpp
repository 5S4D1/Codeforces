// problem: 1999A
// name: A+B Again?

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int value1, value2;
        cin >> value1;

        value2 = value1 % 10;
        value1 /= 10;

        cout << value1 + value2 << endl;
    }

    return 0;
}