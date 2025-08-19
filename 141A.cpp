// problem: 141A
// title: Amusing Joke

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string guest, host, pile;
    cin >> guest >> host >> pile;

    string combined = guest + host;

    sort(combined.begin(), combined.end());
    sort(pile.begin(), pile.end());

    if (combined == pile)
        cout << "YES" << endl;

    else
        cout << "NO" << endl;

    return 0;
}