// sheet #3
// problem: K
// title: Sum Digits

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    string number;
    
    cin >> n;
    cin >> number;

    for (char digit : number)
    {
        sum += (digit - '0');
    }
    cout << sum << endl;

    return 0;
}