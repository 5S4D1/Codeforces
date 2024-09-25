#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, bx, temp, X;
    double sumx = 0;
    cin >> n >> bx;
    temp = n-1;
    
    for (int i = 0; i < n; i++)
    {
        cin >> X;
        sumx += X * pow(bx, temp);
        temp--;
    }

    int m, by, Y;
    double sumy = 0;
    cin >> m >> by;
    temp = m-1;
    for (int i = 0; i < m; i++)
    {
        cin >> Y;
        sumy += Y * pow(by, temp);
        temp--;
    }

    if (sumx < sumy)
        cout << "<" << endl;
    else if (sumx > sumy)
        cout << ">" << endl;
    else
        cout << "=" << endl;

    return 0;
}