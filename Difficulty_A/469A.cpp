// problem: 469A
// title: I Wanna Be the Guy

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q;
    cin >> n;
    cin >> p;
    //  set automatically keeps only one copy of each value
    set<int> levels;

    for (int i = 0; i < p; i++)
    {
        int level;
        cin >> level;
        levels.insert(level);
    }

    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int level;
        cin >> level;
        levels.insert(level);
    }

    if (levels.size() == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}