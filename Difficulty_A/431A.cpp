// problem: 431A
// title: Black Square

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5];
    string s;
    int sum = 0;
    
    for (int i = 0; i < 4; ++i)
        cin >> a[i];

    cin >> s;
    for (char c : s)
        sum += a[c - '0' - 1];

    cout << sum << endl;

    return 0;
}