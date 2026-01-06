// contest #3
// problem: A
// title: Square or rectangle

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int w, h;
        cin >> w >> h;

        if (w == h)
            cout << "Square\n";
        else
            cout << "Rectangle\n";
    }

    return 0;
}