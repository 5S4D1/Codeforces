// problem: 1915A
// name: Odd One Out

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n;
    while (n--)
    {
        cin >> a >> b >> c;
        
        if (a == b && a != c)
            cout << c << endl;
        
        else if (a == c && a != b)
            cout << b << endl;
        
        else if (b == c && b != a)
            cout << a << endl;
        
    }

    return 0;
}