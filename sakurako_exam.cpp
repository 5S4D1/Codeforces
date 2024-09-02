#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;

    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        /*
        if a is even number of 1's then sum of a == 0
        if a is odd number of 1's then sum of a == 1

        if b is even number of 2's then sum of b == 0
        if b is odd number of 2's then sum of b == 1
        */
        if (a % 2 == 0 && b % 2 == 0)
            cout << "YES" << endl;
        else if (a == 0 && b % 2 != 0)
            cout << "NO" << endl;
        else if (a % 2 != 0 && b == 0)
            cout << "NO" << endl;
        else
        {
            if (a % 2 == 0 && b % 2 != 0 && a > b)
            {
                cout << "YES" << endl;
            }
            else if (a % 2 == 0 && b % 2 != 0 && a < b)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}