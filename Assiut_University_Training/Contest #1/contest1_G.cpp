// contest #1
// problem: G
// title: Katryoshka

#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long eyes, mouths, bodies;
    cin >> eyes >> mouths >> bodies;

    if (eyes == 0 || bodies == 0)
    {
        cout << 0 << endl;
    }
    else if (mouths == 0)
    {
        cout << min({eyes / 2, bodies}) << endl;
    }
    else
    {
        unsigned long long katroyoshkas = 0;

        katroyoshkas = min({eyes, mouths, bodies});

        eyes -= katroyoshkas;
        mouths -= katroyoshkas;
        bodies -= katroyoshkas;

        if (eyes == 0 || bodies == 0)
        {
            cout << katroyoshkas << endl;
        }
        else
        {
            if (eyes / 2 <= bodies)
            {
                katroyoshkas += eyes / 2;
                cout << katroyoshkas << endl;
            }
            else
            {
                katroyoshkas += bodies;
                cout << katroyoshkas << endl;
            }
        }
    }

    return 0;
}