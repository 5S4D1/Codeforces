// contest #2
// problem: E
// title: Hady Rides the Train

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long id, row, col;
    cin >> id;

    row = id / 4;

    if (row % 2 == 0)
    {
        col = id % 4;
    }
    else
    {
        col = 3 - (id % 4);
    }
    cout << row << " " << col << endl;

    return 0;
}