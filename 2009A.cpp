// problem: 2009A
// name: Minimize!

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        int c = b - a;
        cout << c << endl;
    }

    return 0;
}