// sheet #3
// problem: A
// title: Summation

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long sum = 0;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }

    cout << abs(sum) << endl;

    return 0;
}