#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x, p;
    cin >> x >> p;
    double originalPrice = (p / (1 - (x / 100.0)));
    
    cout << fixed << setprecision(2) << originalPrice << endl;

    return 0;
}