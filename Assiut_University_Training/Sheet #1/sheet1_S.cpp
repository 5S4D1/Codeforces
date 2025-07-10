// sheet #1
// problem: S
// title: Interval

#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x;
    cin >> x;

    if (x >= 0 && x <= 100)
    {
        cout << "Interval ";
        if (x >= 0 && x <= 25)
            cout << "[0,25]" << endl;
        else if (x > 25 && x <= 50)
            cout << "(25,50]" << endl;
        else if (x > 50 && x <= 75)
            cout << "(50,75]" << endl;
        else
            cout << "(75,100]" << endl;
    }
    else
        cout << "Out of Intervals" << endl;

    return 0;
}