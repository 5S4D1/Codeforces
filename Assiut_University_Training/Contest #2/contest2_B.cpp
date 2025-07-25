// contest #2
// problem: B
// title: Drawing 'X'

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, center;
    cin >> x;
    center = (x + 1) / 2;

    // upper half
    for (int i = 1; i < center; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            if (j == i && j < center)
                cout << "\\";
            else if (j == (x - i + 1) && j >= center)
                cout << "/";
            else
                cout << "*";
        }
        cout << endl;
    }
    // center part
    for (int i = 1; i < x; i++)
    {
        if (i == center)
            cout << "X";
        cout << "*";
    }
    cout << endl;

    // lower half
    for (int i = center - 1; i > 0; i--)
    {
        for (int j = 1; j <= x; j++)
        {
            if (j == i && j < center)
                cout << "/";
            else if (j == (x - i + 1) && j >= center)
                cout << "\\";
            else
                cout << "*";
        }
        cout << endl;
    }

    return 0;
}