// sheet #2
// problem: U
// title: Some Sums

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, sum = 0;
    cin >> n >> a >> b;

    for (int i = 1; i <= n; i++)
    {
        int temp = i;
        int values = 0;

        while (temp > 0)
        {
            values += temp % 10;
            temp /= 10;
        }
        if (values >= a && values <= b)
            sum += i;
    }
    cout << sum << endl;

    return 0;
}