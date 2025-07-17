// contest #1
// problem: H
// title: Data Type Guessing

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, k, a;
    cin >> n >> k >> a;

    double result = ((n * k) / a);
    double isFloat = floor(result);

    if (isFloat != result)
        cout << "double" << endl;

    else if (result >= -2147483648 && result <= 2147483647)
        cout << "int" << endl;

    else
        cout << "long long" << endl;

    return 0;
}