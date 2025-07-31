// problem: 791A
// name: Bear and Big Brother

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Limak, Bob, years = 0;
    cin >> Limak >> Bob;

    while (Limak <= Bob)
    {
        Limak *= 3;
        Bob *= 2;
        years++;
    }
    cout << years << endl;

    return 0;
}