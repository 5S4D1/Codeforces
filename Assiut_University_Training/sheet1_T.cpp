// sheet #1
// problem: T
// title: Sort Numbers

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    if (a <= b && a < c)
    {
        cout << a << endl;
        if (b < c)
        {
            cout << b << endl;
            cout << c << endl;
        }
        else
        {
            cout << c << endl;
            cout << b << endl;
        }
    }
    else if (b < a && b <= c)
    {
        cout << b << endl;
        if (a < c)
        {
            cout << a << endl;
            cout << c << endl;
        }
        else
        {
            cout << c << endl;
            cout << a << endl;
        }
    }
    else if (c <= a && c < b)
    {
        cout << c << endl;
        if (a < b)
        {
            cout << a << endl;
            cout << b << endl;
        }
        else
        {
            cout << b << endl;
            cout << a << endl;
        }
    }
    else
    {
        if (a == b && b == c)
        {
            cout << a << endl;
            cout << b << endl;
            cout << c << endl;
        }
    }
    cout << endl;
    cout << a << "\n"
         << b << "\n"
         << c << endl;
    return 0;
}