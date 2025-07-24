// sheet #2
// problem: X
// title: Convert To Decimal 2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int decimal;
        cin >> decimal;
        bitset<32> binary(decimal);
        bitset<32> result;
        int flag = 0;

        for (int i = 31; i >= 0; i--)
        {
            if (binary[i] == 1)
                flag++;
        }

        for (int i = 0; i < flag; i++)
            result.set(i);

        cout << result.to_ulong() << endl;
    }

    return 0;
}