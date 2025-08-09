// problem: 133A
// title: HQ9+

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string p;
    cin >> p;
    bool hasH = false, hasQ = false, has9 = false;

    for (char c : p)
    {
        if (c == 'H')
            hasH = true;
        else if (c == 'Q')
            hasQ = true;
        else if (c == '9')
            has9 = true;
    }
    
    if (hasH || hasQ || has9)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}