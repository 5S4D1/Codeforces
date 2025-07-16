// contest #1
// problem: F
// title: Adding Bits

#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long a, b;
    unsigned long long result = 0;
    unsigned long long power = 1;

    cin >> a >> b;

    while (a > 0 || b > 0) {
        unsigned long long bitA = a % 2;
        unsigned long long bitB = b % 2;
        // XOR operation for bit addition without carry
        // bitA and bitB are the rightmost bits of a and b respectively
        // powwer keeps track of the current power of 2
        result += (bitA ^ bitB) * power;
        a /= 2;
        b /= 2;
        power *= 2;
    }

    cout << result << endl;
    
    return 0;
}