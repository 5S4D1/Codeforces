// problem: 1968A
// title: Maximize?

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        // If x is prime, then y = 1 will maximize gcd(x, y) + y
        // Otherwise, y = x - 1 will maximize gcd(x, y) + y
        int y = (x == 2) ? 1 : x - 1;

        cout << y << endl;
    }

    return 0;
}