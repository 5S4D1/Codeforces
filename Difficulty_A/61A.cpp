// problem: 61A
// title: Ultra-Fast Mathematician

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    for (int i = 0; i < a.size(); i++)
    {
        // this XOR operation compares the ASCII values of string characters
        cout << (a[i] xor b[i]);
    }
    cout << endl;

    return 0;
}